/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248455
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((int) var_4))));
            var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) max((min((((/* implicit */unsigned short) (_Bool)1)), (var_13))), (((/* implicit */unsigned short) (_Bool)1))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) 1035240051U)))))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_3 [i_1] [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        var_18 &= ((/* implicit */unsigned short) (_Bool)1);
    }
    var_19 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) -1901780687080201329LL))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_8)))) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (unsigned short)14336)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) > (-1981693940)))))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            {
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_3])) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) arr_8 [i_2]))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                arr_14 [i_2] [i_3] = ((/* implicit */unsigned char) arr_11 [i_2] [i_2]);
                var_20 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_3])), (arr_11 [i_2] [i_2])))) ? (((/* implicit */int) max((arr_10 [i_2]), ((unsigned char)127)))) : (((/* implicit */int) max(((unsigned short)20024), ((unsigned short)65535)))))) > (((/* implicit */int) ((short) arr_12 [i_2] [i_3])))));
                arr_15 [i_3] [i_2] [i_2] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    arr_20 [i_2] [i_3] [i_4] = ((/* implicit */long long int) max(((((~(((/* implicit */int) var_14)))) | (((/* implicit */int) arr_10 [i_3])))), (max((((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_3] [i_3])), (arr_19 [i_3] [i_3] [i_3])))), (((arr_9 [i_3] [i_4 - 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))));
                    arr_21 [i_3] [i_4] = ((((/* implicit */int) ((((/* implicit */int) (signed char)-124)) == (((/* implicit */int) ((var_2) || (((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2])))))))) * (((/* implicit */int) arr_10 [i_4])));
                    arr_22 [i_2] [i_2] [i_2] [i_4 - 1] = ((/* implicit */int) var_14);
                }
                for (long long int i_5 = 1; i_5 < 19; i_5 += 2) 
                {
                    arr_25 [i_2] [i_2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_12 [i_5 + 1] [i_2]))) ? (((((2050981130) + (((/* implicit */int) (short)-16901)))) + (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))) : (min(((-(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */int) arr_16 [i_5 + 1] [i_5] [i_5 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 20; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            {
                                arr_32 [i_2] [i_2] [i_6] [i_6] [i_2] [i_6] |= ((/* implicit */unsigned short) (!((_Bool)1)));
                                arr_33 [i_2] [i_2] [i_2] [i_6] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)6186)) : (((/* implicit */int) (_Bool)1))));
                                var_21 |= ((/* implicit */unsigned short) (-((((_Bool)1) ? ((+(((/* implicit */int) arr_9 [i_7] [i_7])))) : (((/* implicit */int) (signed char)-126))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4267025712U)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
    var_24 = ((11069310079451737050ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
}
