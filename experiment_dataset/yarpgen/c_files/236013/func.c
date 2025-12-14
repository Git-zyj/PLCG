/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236013
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
    var_11 = ((/* implicit */_Bool) var_9);
    var_12 = ((/* implicit */unsigned char) ((unsigned int) 2006663951U));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_13 += ((/* implicit */unsigned char) (signed char)0);
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned char)0] [i_3 + 1] [i_3 - 1] [i_3 - 2]))) == (arr_5 [i_3] [i_3 + 1] [(unsigned short)4] [i_3 - 1]))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_3 + 1] [i_3 - 2] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_3 + 1] [17] [i_3]))) : (arr_5 [(signed char)13] [i_3 + 1] [i_3 - 1] [(unsigned short)17]))))))));
                            arr_10 [3LL] [i_1] [2U] [i_3] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_1 [16LL]))))) ? (((((long long int) -7648037533981802402LL)) / (min((-7648037533981802409LL), (((/* implicit */long long int) arr_2 [i_0] [i_1] [3LL])))))) : (((/* implicit */long long int) (((+(2288303350U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)24))))))));
                            arr_11 [i_0] [14] [i_2] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)65535)), (2288303344U)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_6))));
                var_16 = ((/* implicit */long long int) min((var_16), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (7648037533981802402LL)))));
                arr_12 [i_0] [i_0] [(signed char)7] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) 2288303336U)) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_8 [(unsigned char)5] [8ULL] [i_0]) : (((/* implicit */long long int) 4294967281U))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))) ^ (var_6)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6)));
    var_18 = min((((/* implicit */long long int) var_7)), (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_10))));
}
