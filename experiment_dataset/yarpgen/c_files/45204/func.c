/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45204
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
    var_14 -= ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (short)-4096)))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((257673978U) < (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1)))))))), (3358032958393767243ULL))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_16 -= ((/* implicit */_Bool) ((unsigned short) (short)-4096));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15866))) : (arr_2 [(_Bool)1] [(_Bool)1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-18529))))) : (-7480783876897677512LL))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_18 -= ((/* implicit */signed char) (unsigned short)59704);
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) + (((/* implicit */int) arr_0 [i_0])))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_20 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)15848)) <= (((/* implicit */int) var_13))))) % (((((/* implicit */_Bool) 4037293317U)) ? (((/* implicit */int) (unsigned short)1016)) : (((/* implicit */int) (signed char)-6))))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_21 *= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)212)) || (((/* implicit */_Bool) (short)4096)))))));
                    var_22 = ((/* implicit */short) (unsigned short)127);
                }
            }
            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_2] [(_Bool)1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [(short)0] [i_0]))) : (arr_9 [i_2] [i_2] [i_0])));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                arr_21 [(signed char)7] [i_2] [i_6] [i_6] = ((((/* implicit */int) ((257673993U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) >= (((((/* implicit */_Bool) (short)-14431)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_0] [i_0])))));
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~(((/* implicit */int) (short)17733)))))));
                var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4037293317U)));
                var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-6467411820199351373LL))) == (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_6] [i_6])))))));
            }
        }
    }
}
