/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2008
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (unsigned short)59197))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1 + 1] [i_0] = ((/* implicit */int) max((-4985440338541080374LL), (((/* implicit */long long int) (unsigned short)59193))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */int) (unsigned short)12534);
                                arr_13 [(unsigned short)6] [8ULL] [(unsigned short)6] [i_3] [(unsigned short)6] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) / (var_9)))) ? (((((/* implicit */_Bool) 2040348917)) ? (var_2) : (((/* implicit */long long int) -1225059008)))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)6311)) / (((/* implicit */int) (unsigned short)12382)))))))) ? (((((var_4) <= (((/* implicit */unsigned long long int) var_10)))) ? (arr_8 [i_0 - 3] [i_0 - 1] [i_1 + 1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((var_8) & (var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12383))) <= (var_9))) && (((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1] [i_1 - 1]))))))));
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) 16036181824234109505ULL)) ? (arr_11 [(unsigned short)14] [i_1] [i_1] [i_1 + 2] [i_4] [i_1] [i_0 + 1]) : (9223372036854775807LL))) : (((((/* implicit */_Bool) (+(-2382994029706481897LL)))) ? (((/* implicit */long long int) var_1)) : (-5592371665417217250LL)))));
                                var_13 = ((((((/* implicit */_Bool) 11445911365185054657ULL)) ? (((/* implicit */long long int) 2147483647)) : (-2236846752202550967LL))) + ((((!(((/* implicit */_Bool) -7316421738206834242LL)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [14] [16] [12LL] [i_3]) : (9223372036854775802LL))) : (((((/* implicit */_Bool) arr_11 [13] [13] [i_1 + 2] [14LL] [i_1] [13] [i_1 - 1])) ? (((/* implicit */long long int) 1024496011)) : (arr_2 [i_3]))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) / (var_4)))) ? (((((/* implicit */_Bool) (unsigned short)3959)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30887))) : (-165075846571336459LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1193))))) >= (min((((((/* implicit */_Bool) 8339045437612058981ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_7 [i_2] [i_2] [i_0 - 2] [i_1] [i_1] [i_0 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [15LL] [13LL])) ? (var_10) : (var_5))))))));
                    arr_14 [i_0] [i_0] = ((min((arr_7 [1ULL] [i_0 - 3] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2]), (arr_7 [i_0] [i_0 - 3] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 8386318264005478853LL)) ? (((/* implicit */int) (unsigned short)511)) : (var_1)))));
                }
            } 
        } 
    } 
}
