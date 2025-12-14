/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219288
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 3360313527U))) ? (((((/* implicit */int) min((var_17), (var_5)))) + (((/* implicit */int) var_10)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)145)), ((unsigned short)829))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) min((8722808603860469839LL), (((/* implicit */long long int) (unsigned char)111)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))) : (var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((int) ((signed char) ((long long int) arr_0 [i_1] [i_2]))));
                    arr_7 [i_0] [i_1] [3] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6616)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6615))) : (-14LL)))))))) - (arr_3 [i_1] [7U]));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    arr_12 [i_0] [i_0] [(_Bool)1] [(signed char)10] &= ((/* implicit */short) ((_Bool) (_Bool)1));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29926)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)37178)) ? (3360313527U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28386))))))));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -70368744177664LL))) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) arr_10 [i_0]))));
                    var_24 ^= ((/* implicit */unsigned int) arr_3 [i_4] [i_0]);
                    arr_15 [(short)10] [i_1] = ((/* implicit */signed char) ((15466314978948579008ULL) >> (((3360313553U) - (3360313509U)))));
                    arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_17 [(short)10] [i_1] = ((/* implicit */int) arr_10 [i_1]);
                }
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)145)), (((short) arr_3 [i_0] [i_0]))))) ? (min((max((((/* implicit */unsigned long long int) var_5)), (9854189213411543549ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_13 [i_5])))))))));
                    var_26 = ((/* implicit */signed char) ((short) min((arr_8 [i_0] [2LL] [i_5]), (arr_8 [6] [(signed char)8] [i_5]))));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) max((max((max((1760962136U), (((/* implicit */unsigned int) -1)))), (((/* implicit */unsigned int) ((short) -562949953421312LL))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)41818)) == (((/* implicit */int) arr_13 [i_1]))))), (((((/* implicit */int) (unsigned short)512)) << (((var_16) - (1910114052)))))))))))));
                    var_28 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 17244608652373652472ULL)) ? (((/* implicit */int) (short)17696)) : (((/* implicit */int) ((((/* implicit */_Bool) 8760504386705718466ULL)) && (((/* implicit */_Bool) arr_14 [i_0]))))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0])) && (((/* implicit */_Bool) var_1)))))));
                    arr_20 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 28ULL))) ? (((((/* implicit */int) (unsigned short)6532)) / (((/* implicit */int) (unsigned short)28045)))) : (var_12)))), (max((1202135421335899144ULL), (((/* implicit */unsigned long long int) arr_9 [i_5]))))));
                }
                var_29 += ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
                arr_21 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)512));
            }
        } 
    } 
}
