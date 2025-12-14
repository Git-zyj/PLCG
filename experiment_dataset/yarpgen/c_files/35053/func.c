/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35053
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
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */_Bool) ((min(((~(4129460771U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))))) | (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned char)178)) * (((/* implicit */int) (_Bool)1)))))))));
        var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)178)) << (((/* implicit */int) var_6))))) ? (((((/* implicit */int) (unsigned char)67)) + (arr_1 [i_0 - 1]))) : (arr_0 [i_0 + 2]))) : (((/* implicit */int) (_Bool)1))));
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((short) ((((/* implicit */int) (_Bool)1)) << (((arr_2 [i_0 - 4]) - (6565086253245811910LL)))))))));
    }
    for (unsigned short i_1 = 4; i_1 < 13; i_1 += 1) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(arr_4 [i_1 - 4] [i_1 - 1])))) % ((-(arr_5 [i_1 - 3])))));
        var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 3])) ? ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_7 [i_1 - 3] [i_1 - 3]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32758)))))));
        var_14 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1 - 4])) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])) : (arr_6 [1]))) / (arr_5 [i_1 + 1])));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) arr_9 [i_2] [i_2]);
        arr_11 [i_2] = ((/* implicit */unsigned long long int) 25U);
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            for (int i_4 = 1; i_4 < 15; i_4 += 3) 
            {
                for (unsigned short i_5 = 2; i_5 < 15; i_5 += 2) 
                {
                    {
                        arr_18 [i_3] [i_2] [i_3] [i_4] [i_5 + 2] = ((/* implicit */short) ((unsigned int) ((arr_15 [i_2] [i_3] [i_3] [i_5 + 2]) >= (((/* implicit */unsigned long long int) arr_9 [i_2] [i_5])))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            arr_22 [i_3] [i_3] [i_4] [i_5] [i_6] [i_6] [i_3 + 1] = ((/* implicit */_Bool) ((((unsigned int) var_3)) >> (((var_1) - (16487385454123375288ULL)))));
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(arr_15 [i_3] [i_4] [i_2] [i_6])))) ? (((/* implicit */int) arr_12 [i_2] [i_4 + 2] [i_3 - 1])) : (arr_17 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]))))))));
                            arr_23 [i_2] [i_3] [i_4] [11U] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)204)) ? (4099049758U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)0])))))) : (2097151ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))))));
                        }
                        for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            arr_26 [i_2] [i_2] [i_3] [i_4 + 1] [i_4] [i_5 + 1] [i_7] &= ((/* implicit */unsigned int) (_Bool)1);
                            var_16 = ((/* implicit */unsigned long long int) ((4294967295U) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_2] [i_2] [i_3] [i_3] [i_4 + 1] [i_4 + 1] [i_3])))))));
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((2281028317924550734LL), (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_3 - 1] [i_2] [i_5 + 4] [i_7]))) % (arr_16 [i_2] [i_3] [i_4] [i_5]))))))));
                            var_18 = (~(((((/* implicit */_Bool) arr_14 [i_5 + 3] [i_5 + 2] [i_5] [i_5])) ? (((/* implicit */int) arr_14 [i_5 - 2] [i_5 - 1] [i_5] [i_5 + 2])) : (((/* implicit */int) var_3)))));
                        }
                        arr_27 [i_3 - 1] [i_3] [i_3] = ((/* implicit */_Bool) (signed char)-90);
                        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)256))));
                    }
                } 
            } 
        } 
        var_20 *= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) : (((unsigned int) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_19 [i_2] [(unsigned short)10] [i_2])) : (arr_17 [i_2] [(_Bool)1] [i_2] [i_2])))));
        var_21 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [12ULL] [i_2])))))));
    }
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)2990))))))) << (((var_1) - (16487385454123375265ULL))))))));
    var_23 = ((/* implicit */unsigned short) (unsigned char)178);
    var_24 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
    var_25 = ((((/* implicit */_Bool) -1374856739)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_9))))));
}
