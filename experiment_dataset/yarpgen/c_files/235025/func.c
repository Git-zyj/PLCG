/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235025
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
    var_12 = ((/* implicit */int) var_11);
    var_13 = ((/* implicit */unsigned char) (~(((var_9) << (min((((/* implicit */unsigned long long int) var_1)), (var_9)))))));
    var_14 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((((/* implicit */int) (short)-1)) * (((/* implicit */int) (unsigned short)55061)))) * ((+(((/* implicit */int) (short)-1)))))) : (((/* implicit */int) arr_1 [i_0])))))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)139)), (var_9)))) ? (arr_3 [i_1] [i_1]) : (var_5))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) 10009579809284542779ULL))) <= (((/* implicit */int) (_Bool)1))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) (signed char)-12))))) : (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 - 2] [i_0]))) : (7519937971049413067LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 3; i_5 < 9; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned char) ((_Bool) min((((((/* implicit */int) var_11)) * (((/* implicit */int) var_3)))), (((/* implicit */int) var_1)))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)127)), (-7519937971049413054LL)))) ? (((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5 - 3] [i_5])) ? (((((/* implicit */_Bool) var_2)) ? (arr_15 [i_0] [i_0]) : (((/* implicit */int) var_7)))) : (var_8))) : (min((arr_16 [i_1 + 1] [i_1 - 1]), (arr_16 [i_1 + 1] [i_1 + 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), ((_Bool)1))))) >= (var_4));
}
