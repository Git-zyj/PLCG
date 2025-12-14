/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24646
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
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((15333660399250817982ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131)))))) ? (3113083674458733640ULL) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (15333660399250817972ULL))))) >> (((var_5) - (9711875024713540125ULL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (((~((+(((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) arr_5 [i_1 - 2] [(_Bool)1] [i_1])) ? (((/* implicit */int) min(((unsigned short)4), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) (_Bool)1))))));
                var_17 = ((((/* implicit */_Bool) (-(((/* implicit */int) (((_Bool)1) && ((_Bool)1))))))) ? (((((/* implicit */_Bool) var_1)) ? (13820406290623389999ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) : (16935658363887206279ULL));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16431672233928784796ULL)) ? (((/* implicit */int) arr_8 [(unsigned short)21] [i_1] [i_2] [i_1 - 3])) : (((/* implicit */int) arr_5 [15ULL] [i_3 - 2] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((17141289616060219010ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? ((+(((/* implicit */int) (unsigned char)48)))) : (((/* implicit */int) (unsigned char)5))))) : ((~(14025931571771129486ULL)))));
                            var_19 = ((/* implicit */unsigned char) (_Bool)1);
                            var_20 = max(((~(18000364623251706368ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)213)))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */_Bool) 2390560937793391668ULL);
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_21 [(unsigned char)12] [i_5] [i_5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_1 [i_1 - 3]), (arr_1 [i_1 - 3]))))));
                                var_21 -= ((/* implicit */unsigned short) (-((-(2497252792449564032ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 *= ((((/* implicit */_Bool) (unsigned char)246)) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)68)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (17021688193223317392ULL))))) : (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (_Bool)1))))))));
}
