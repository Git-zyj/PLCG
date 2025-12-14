/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200584
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */unsigned short) (signed char)-87);
                var_15 |= ((/* implicit */int) ((short) var_8));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3136849445234486792LL)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_4 [i_1]))))))) * (arr_0 [i_0 + 1])));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_10);
    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) max((var_3), (((/* implicit */long long int) var_1)))))) > (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)57)), (var_4)))) ? (var_13) : (((((/* implicit */int) (short)-3151)) | (230046899)))))));
    var_18 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 2) 
    {
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            {
                var_19 |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (4772076062113770911LL) : (-6642103307849124060LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -4772076062113770895LL)))) : (max((-4772076062113770886LL), (((/* implicit */long long int) (short)28515)))))), (((/* implicit */long long int) (unsigned char)42))));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    var_20 -= 493326166U;
                    var_21 = ((/* implicit */signed char) ((((_Bool) (-(4772076062113770868LL)))) ? (((/* implicit */long long int) (-(1998815440U)))) : (((-4772076062113770895LL) ^ (((/* implicit */long long int) var_13))))));
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) arr_8 [i_2 + 1] [i_2 - 1])) < (((unsigned int) 4772076062113770904LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned char) var_2)))));
                }
                for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    var_23 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 529518389271991030LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1]))))));
                    arr_18 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (~(arr_16 [i_2] [i_3] [i_2])));
                }
                for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) var_13);
                        arr_26 [i_2] [i_7] [14ULL] [i_6] [i_3] [i_2] = ((/* implicit */long long int) arr_24 [i_2] [i_2] [i_2 - 1] [i_2]);
                        var_25 = ((/* implicit */unsigned int) var_0);
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 1; i_8 < 22; i_8 += 2) 
                        {
                            arr_29 [i_2] [i_3] [i_6] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 4772076062113770891LL)) ? (((/* implicit */int) (unsigned char)0)) : (var_13)))));
                            var_26 *= ((/* implicit */unsigned short) -4772076062113770892LL);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            arr_33 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_30 [i_7])) != (((/* implicit */int) (signed char)-82)))))));
                            var_27 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25036))) : (-4772076062113770877LL)))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) -4772076062113770903LL)) ? (3286625460U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [2])))));
                        }
                        for (unsigned int i_10 = 3; i_10 < 22; i_10 += 2) 
                        {
                            var_29 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_15 [i_2])))))));
                        }
                        for (long long int i_11 = 4; i_11 < 21; i_11 += 4) 
                        {
                            arr_40 [i_2] = (((_Bool)1) ? (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)81)), (var_5)))) : (((((/* implicit */_Bool) ((unsigned int) (short)-21517))) ? (((((/* implicit */_Bool) var_8)) ? (8387584U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) arr_11 [i_2 + 1] [i_2])))));
                            var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_28 [i_2 + 1])), (((((/* implicit */_Bool) max((var_6), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_13)) ? (4607908632685850820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)31954))))) ? ((~(16U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)36104))))))))))));
                            arr_41 [i_2 + 1] [i_3] [i_11] [i_7] [i_11 - 2] [i_11 + 2] [8ULL] |= ((/* implicit */short) ((signed char) max((((/* implicit */unsigned int) arr_28 [i_7])), (max((arr_14 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) 125829120)))))));
                        }
                        arr_42 [i_2] [i_2] [i_2] [(unsigned short)19] [i_7] = ((/* implicit */unsigned long long int) var_4);
                    }
                    var_33 = ((/* implicit */short) (signed char)-82);
                    var_34 = ((/* implicit */long long int) 1857610500);
                }
            }
        } 
    } 
}
