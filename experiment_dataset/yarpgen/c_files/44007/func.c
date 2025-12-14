/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44007
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)31))))) : ((~(arr_0 [i_0])))))) : (18446744073709551604ULL))))));
        arr_3 [i_0 + 2] [(signed char)9] = ((/* implicit */unsigned char) (~(max(((+(var_7))), (((/* implicit */unsigned int) min((((/* implicit */short) var_14)), ((short)-30652))))))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_13)), (((max((var_3), (var_5))) / (((/* implicit */long long int) ((unsigned int) var_9)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_16 [i_3] [i_3] [i_1] [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-32))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17412)))))))));
                        arr_17 [i_0 + 3] [i_1] [11U] [i_1] = ((/* implicit */short) max((min(((+(arr_14 [i_0 + 3] [i_2] [i_1] [i_0 + 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9))))))), (((/* implicit */unsigned long long int) var_5))));
                        var_17 = ((/* implicit */long long int) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((((/* implicit */int) var_13)) + (36)))));
                        var_18 = ((/* implicit */long long int) arr_12 [i_0 + 1] [i_0 - 2] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 3; i_4 < 19; i_4 += 4) 
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1 - 2] [i_1 - 2] [i_4] [i_4])))))))) ? (((/* implicit */int) ((unsigned char) min(((short)8460), (((/* implicit */short) var_13)))))) : (((/* implicit */int) var_1))));
                            arr_21 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((short) var_9)))))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_0 [i_0 - 3]))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_2] [i_3] [i_4])))), (((/* implicit */int) var_13))))) : (max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65517))))), (((unsigned int) 1094417064156710211ULL))))));
                            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1 + 1])) ? (((/* implicit */int) max((arr_5 [i_1 + 1] [i_4 + 2]), (((/* implicit */unsigned char) var_14))))) : ((-(((/* implicit */int) arr_5 [i_0 + 2] [2LL]))))));
                            arr_22 [i_1] [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (-(var_4)))))));
                        }
                        for (unsigned char i_5 = 4; i_5 < 20; i_5 += 3) 
                        {
                            arr_26 [i_0] [i_0] [i_1] [17U] [i_1] [i_3] [3U] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))), (max((min((((/* implicit */unsigned long long int) arr_8 [(unsigned char)14] [i_1])), (3ULL))), (((/* implicit */unsigned long long int) var_3))))));
                            arr_27 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_15);
                            arr_28 [i_0] [i_0] [i_1] [i_2] [i_3 + 3] [i_2] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)-31)), (var_12)));
                        }
                    }
                } 
            } 
        } 
    }
    var_21 = ((unsigned char) ((int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (1197700049173160854LL))));
    var_22 = var_4;
    var_23 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_13)))) / (((/* implicit */int) var_13))));
}
