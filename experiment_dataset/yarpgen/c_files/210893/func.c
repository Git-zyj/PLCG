/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210893
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 ^= ((/* implicit */unsigned char) min((min((max((arr_1 [5U] [i_0]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) max((2205679256077988319LL), (((/* implicit */long long int) var_0))))))), (max((min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)61143)))), (((/* implicit */unsigned long long int) (-(6806902266555578591LL))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) min(((+((+(arr_1 [i_0] [i_0]))))), (min((min((((/* implicit */unsigned long long int) -1727703752)), (arr_1 [i_0] [i_0]))), (max((((/* implicit */unsigned long long int) (unsigned char)170)), (var_9)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (~(-1394812251))))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (~((+(var_0))))))));
        var_14 = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned short)61143))))));
        var_15 ^= ((/* implicit */short) (+((-(942535700)))));
    }
    var_16 = ((/* implicit */unsigned int) min((min(((+(var_1))), (min((var_0), (var_1))))), (min(((+(((/* implicit */int) (unsigned short)4387)))), ((+(var_0)))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (long long int i_4 = 3; i_4 < 13; i_4 += 4) 
            {
                {
                    arr_14 [(unsigned char)1] [i_2] [10LL] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)114)), (-25635826)))), (max((min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_1 [i_2] [i_3]))), (((/* implicit */unsigned long long int) max((-4580937192957970855LL), (((/* implicit */long long int) arr_12 [i_4] [i_4] [i_3] [(unsigned short)0])))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (~(max((min((var_9), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)61143)), (arr_11 [i_2])))))));
                                arr_20 [i_6] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) -25635817)), (arr_11 [i_5])))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (-2205679256077988307LL)))), (min((5763510136951860001ULL), (((/* implicit */unsigned long long int) var_8))))))));
                                var_17 = ((/* implicit */unsigned int) min((2205679256077988295LL), (3896843829064484249LL)));
                                arr_21 [i_2] [i_2] = max((min((max((7609598995457281172ULL), (((/* implicit */unsigned long long int) -2205679256077988268LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)82))))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)31263))))), (max((((/* implicit */unsigned long long int) arr_11 [i_3])), (arr_1 [i_2] [4LL]))))));
                                var_18 = ((/* implicit */int) (-(max((max((((/* implicit */unsigned long long int) var_8)), (var_7))), (((/* implicit */unsigned long long int) (+(var_3))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) min((arr_0 [i_2]), (((/* implicit */long long int) arr_13 [i_2] [i_2]))))), ((~(5763510136951860017ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((25635826), (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_3]))))), ((~(arr_0 [i_2]))))))));
                    var_20 = ((/* implicit */long long int) max((min((min((1297929206010148381ULL), (((/* implicit */unsigned long long int) arr_12 [i_2] [i_3] [i_4 - 1] [i_4])))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) arr_9 [i_2] [i_3]))))))), (min((((/* implicit */unsigned long long int) min((-6824081464048089933LL), (((/* implicit */long long int) (unsigned short)26358))))), (max((((/* implicit */unsigned long long int) var_0)), (10092332680188952305ULL)))))));
                }
            } 
        } 
    } 
}
