/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242353
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((int) ((((/* implicit */_Bool) arr_6 [i_1] [19])) ? (((/* implicit */long long int) arr_7 [0LL] [i_1] [(signed char)20])) : (arr_3 [i_0] [i_0] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])))))));
                    arr_9 [i_2] [i_2] = ((/* implicit */short) min((min((((/* implicit */long long int) arr_6 [i_2] [i_1])), (-462347851803203332LL))), (((/* implicit */long long int) (~(arr_1 [i_1]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) 18446744073709551615ULL);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) 3492834039U);
                            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_13 [i_5]))) ? ((+(((((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_5] [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) ((unsigned short) var_14)))));
                            arr_24 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) arr_12 [i_3] [i_3])), (var_4))))) < (((/* implicit */int) arr_15 [i_4]))));
                            arr_25 [i_3] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_4] [i_4 + 2])) >= (((/* implicit */int) arr_6 [i_3] [i_4 - 1])))))));
                        }
                    } 
                } 
                arr_26 [i_3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_16 [i_4 + 3])) ? ((((_Bool)0) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3659160340774547495LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(_Bool)1] [i_3] [i_4] [i_4 + 3] [i_4])))))));
                arr_27 [i_3] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_22 [(unsigned short)2] [i_3] [i_4 - 1] [i_3] [16LL]))))));
                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((4294967273U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_4])) % (((/* implicit */int) arr_11 [(_Bool)1]))))) != ((-(var_16)))))) : (((/* implicit */int) (signed char)110))));
            }
        } 
    } 
}
