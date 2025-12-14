/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198476
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) ((var_5) == (var_2))))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)53))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-((-(var_12)))));
                var_16 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [5ULL])) ? (((/* implicit */int) (unsigned short)18573)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)56))))))) != ((~(((/* implicit */int) min((((/* implicit */unsigned short) (short)14096)), (arr_3 [i_0] [i_0 - 1] [i_1]))))))));
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14100))) == (arr_4 [i_0]))))) : ((~(arr_0 [7U] [i_0 - 1]))))))));
                arr_6 [i_0 - 1] [i_1] = ((/* implicit */unsigned char) max((-2971457887099709244LL), (((/* implicit */long long int) (unsigned short)16294))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_13 [(unsigned short)10] [(unsigned short)4] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 + 1]))))) ? ((+(((/* implicit */int) arr_1 [i_0 - 1])))) : (((((/* implicit */int) arr_1 [i_0 - 1])) >> (((((/* implicit */int) var_4)) - (27331))))));
                            arr_14 [i_3] [i_1] [i_2] [i_1] [(unsigned short)7] [i_0 - 1] = var_9;
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4937830543790403895ULL), (((/* implicit */unsigned long long int) (unsigned char)27))))) ? (arr_9 [i_0 + 1] [(unsigned char)10] [i_2 - 1] [i_3]) : (((/* implicit */unsigned int) (+(606475970))))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 1])))))) + (max((((/* implicit */unsigned int) (unsigned short)16286)), (var_3))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_12);
}
