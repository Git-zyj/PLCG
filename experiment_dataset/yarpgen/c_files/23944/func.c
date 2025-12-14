/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23944
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_10 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) % (arr_2 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1018859557)) || (((/* implicit */_Bool) (unsigned short)48011))))))));
                            arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)127);
                            var_11 = ((/* implicit */unsigned long long int) (unsigned short)48023);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) max((max((arr_11 [i_0] [i_5 - 1] [i_5 - 1]), (arr_11 [i_0] [i_5 + 1] [i_5 + 2]))), (((/* implicit */int) (unsigned short)17524))));
                            var_13 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48011)) && (((/* implicit */_Bool) (unsigned short)17524))))) & (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_1] [i_4] [i_4] [i_5])), ((unsigned short)27805)))))), (((/* implicit */int) var_7))));
                            arr_16 [12] [i_0] [i_0] [12LL] = ((/* implicit */unsigned char) var_2);
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (signed char)127))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                arr_18 [i_0] = ((/* implicit */int) max((max((((/* implicit */long long int) (short)-16)), (((0LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48011))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (unsigned short)17525)))))));
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_5))))) != (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */int) ((_Bool) (_Bool)0))))))))));
}
