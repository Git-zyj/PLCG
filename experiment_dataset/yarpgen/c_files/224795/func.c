/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224795
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (short)25704)) ^ (((/* implicit */int) (short)-25704))))) + (max((((/* implicit */long long int) var_2)), (var_16)))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)-25704))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-9)) ? ((((_Bool)0) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-4244362901076786490LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (max((var_15), (((/* implicit */long long int) ((_Bool) (signed char)-36)))))));
    var_20 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54062))) : (15602973515901766536ULL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_17);
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned char) 18ULL));
                    arr_12 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                    arr_13 [i_1] [i_0] [i_2 + 2] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)-25704))));
                }
                /* vectorizable */
                for (signed char i_3 = 1; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    arr_16 [i_1] = arr_3 [i_1];
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_19 [i_1] [i_1] = ((/* implicit */short) (!((_Bool)1)));
                        arr_20 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)19678)) < (((int) 7887097418651668430LL))));
                        arr_21 [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_3 + 2] [i_3 + 2]))) < (arr_8 [i_4] [i_3 + 1] [i_1] [i_0])))) ^ (((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                        arr_22 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */_Bool) ((((-6915451172331735592LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [i_4])) + (11493)))));
                    }
                }
                for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    arr_25 [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
                    arr_26 [i_0] [(_Bool)1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_9))));
                    arr_27 [i_1] [i_1] = (i_1 % 2 == 0) ? (((((/* implicit */_Bool) (unsigned short)17708)) ? (((((/* implicit */_Bool) 3)) ? (((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0])) << (((arr_3 [i_1]) - (859174786))))) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_1])))) : (min(((~(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (signed char)-39)))))) : (((((/* implicit */_Bool) (unsigned short)17708)) ? (((((/* implicit */_Bool) 3)) ? (((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0])) << (((((arr_3 [i_1]) - (859174786))) + (12049681))))) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_1])))) : (min(((~(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (signed char)-39))))));
                    arr_28 [i_1] = ((/* implicit */_Bool) (~(((long long int) arr_4 [i_0] [i_1]))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (~(max((var_5), (((/* implicit */unsigned long long int) var_12))))));
}
