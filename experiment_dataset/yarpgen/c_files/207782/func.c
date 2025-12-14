/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207782
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_1] |= ((/* implicit */long long int) var_0);
                var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((129704672466775971ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))) || ((!(arr_0 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            var_11 += ((/* implicit */int) min((max((((var_9) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38264))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)124)), (var_5)))))), ((+(max((((/* implicit */long long int) var_8)), (var_9)))))));
                            arr_20 [(unsigned short)19] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) var_8);
                            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_6), (var_6)))))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) (~(((var_0) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)38264))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 6243760288525857946LL)))))))));
                var_14 = ((/* implicit */_Bool) ((int) ((-6243760288525857947LL) < (((/* implicit */long long int) 4294967294U)))));
                arr_21 [i_3] [i_3] = ((/* implicit */unsigned short) (~(var_5)));
                var_15 += ((/* implicit */unsigned long long int) (((!(var_0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [0]))))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_3)) ? (max((var_9), (((/* implicit */long long int) (short)32756)))) : (-3142705568802444071LL)))));
            }
        } 
    } 
    var_16 = max((((/* implicit */long long int) min(((short)-32757), ((short)17795)))), (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65410))) / (var_2))) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7))))));
}
