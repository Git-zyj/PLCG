/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239703
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
    var_10 = ((/* implicit */long long int) max((var_10), (var_4)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = (-(((8387557141908726996LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))))));
                arr_6 [i_0] [i_0 + 1] [i_0] = ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((long long int) arr_4 [i_0 + 1] [i_0 + 1] [i_1])));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_12 &= ((/* implicit */long long int) (signed char)-100);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        arr_14 [(signed char)0] [i_1 - 3] [i_1] [i_0] [i_1] [(signed char)0] = ((/* implicit */signed char) arr_3 [i_0 + 1]);
                        arr_15 [i_0] [i_1 - 2] [i_3] [i_3] = ((long long int) var_7);
                    }
                    for (signed char i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        var_13 += ((/* implicit */signed char) 8387557141908727006LL);
                        arr_20 [i_0] [i_0] [i_2] [i_4 - 2] [i_2] [11LL] = (~(8387557141908726995LL));
                        arr_21 [i_0] [i_4] = min((min(((signed char)4), (arr_18 [i_0] [i_0] [i_2] [i_4 + 1]))), ((signed char)0));
                        var_14 = (~(0LL));
                        arr_22 [i_0] [(signed char)9] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) % (var_4))) >> ((~(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_4]))))))) ? (((((/* implicit */_Bool) min((arr_3 [i_4]), (((/* implicit */long long int) (signed char)85))))) ? (var_8) : (((((/* implicit */_Bool) arr_8 [i_0] [9LL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(signed char)1]))) : (var_9))))) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (signed char)0))))) ? (8800847832506229939LL) : (var_3)))));
                    }
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_15 ^= arr_24 [i_0] [(signed char)12] [i_1] [i_2] [i_5];
                        var_16 = min((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_2] [i_5])) ? (arr_4 [i_0] [i_1 - 2] [i_5]) : (var_8))), (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)16))))));
                        arr_26 [i_2] [i_2] [i_0] = ((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-19))))), ((signed char)-41)));
                    }
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0])) == (((/* implicit */int) arr_2 [7LL] [i_0 - 1]))))) >> (((((((/* implicit */_Bool) (signed char)41)) ? (-6634138889552288478LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-41))))) + (6634138889552288479LL)))));
                        arr_29 [i_0] [i_0] [i_2] [i_6] = ((/* implicit */signed char) max((((/* implicit */long long int) (~(((((/* implicit */int) arr_11 [(signed char)14] [(signed char)7] [i_2] [(signed char)5] [i_2])) | (((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0]))))))), (-8800847832506229939LL)));
                    }
                }
                for (signed char i_7 = 2; i_7 < 13; i_7 += 4) 
                {
                    arr_32 [i_0] [i_1] [12LL] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)2)))))));
                    arr_33 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */signed char) max((((long long int) 8530164081401463969LL)), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-105)) % (((/* implicit */int) (signed char)103)))))));
                }
                for (signed char i_8 = 1; i_8 < 14; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 3; i_9 < 14; i_9 += 1) 
                    {
                        for (long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                        {
                            {
                                arr_41 [i_0] [i_1 + 1] [i_8] [i_0] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1 - 2] [i_1 - 4] [i_8 + 1])) && (((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1 - 2] [i_1 - 4] [i_8 - 1])))))));
                                arr_42 [i_0 - 1] [i_1] [i_8] [i_8] [i_0] = 2751557517693108006LL;
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((arr_16 [i_1]) | (min((((/* implicit */long long int) (signed char)-117)), (((var_9) % (-8800847832506229940LL)))))));
                }
            }
        } 
    } 
}
