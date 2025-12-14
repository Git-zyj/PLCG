/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198750
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_11 += ((/* implicit */signed char) arr_8 [i_3] [i_1] [i_3] [i_3]);
                            var_12 = (~(min((((/* implicit */unsigned int) ((var_2) & (((/* implicit */int) (short)32758))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))) & (var_1))))));
                            var_13 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_2] [i_0]))) < (1774996074U))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (arr_8 [i_0] [i_0] [14U] [i_0])))) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1774996081U)) ? (((/* implicit */int) (short)32752)) : (-673221986)))) : (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */unsigned int) var_2)) : (var_7)))))));
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((70368744177663LL), (((/* implicit */long long int) (short)-32738))))) ? (((/* implicit */int) arr_10 [11LL] [i_0] [i_2] [i_2] [17] [i_2])) : (673221991)))) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (short)5028)))))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-32750)) / (((((/* implicit */_Bool) 1704755340)) ? (-303741573) : (var_9)))))), ((-(((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) (short)32741)))))))));
                arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)19])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32751))) : (((((/* implicit */long long int) var_8)) ^ (arr_5 [(_Bool)1] [i_0] [(short)21]))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) (unsigned short)5490);
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (short i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6 + 1] [i_6 + 2] [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60049))) : (var_0)))) || (((/* implicit */_Bool) -70368744177684LL))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_7))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-7727)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_5] [i_6 - 1])) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (short)22922))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)87))))) : ((~(((/* implicit */int) (short)-7721))))))) : (max(((~(-70368744177653LL))), (((/* implicit */long long int) arr_9 [i_5] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_5]))))));
                    arr_19 [i_4] [i_5] [i_5] = (short)7733;
                }
            } 
        } 
    } 
}
