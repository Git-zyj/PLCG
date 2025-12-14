/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224306
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (12055206739716952388ULL)))));
        var_20 = ((/* implicit */unsigned short) arr_3 [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        var_21 -= ((/* implicit */int) (+(0U)));
        var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)45099))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)50))))) : (72040001851883520LL)));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1])) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18309)))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_24 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [(short)5]))))));
            var_25 = (~(7654188349888591733ULL));
            var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)45100))))) : (268435455LL)));
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (arr_7 [i_2] [i_1 + 2]))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])) ? ((-(((/* implicit */int) arr_15 [i_4] [i_3] [9] [9U])))) : (((((/* implicit */_Bool) 7505295063874927511ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)119))))));
                        var_29 -= ((/* implicit */short) (+((+(656539433U)))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_7 [i_3] [(signed char)2]))));
                    }
                } 
            } 
        }
    }
    var_31 = ((/* implicit */unsigned short) -615286161);
    var_32 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61440)))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            {
                arr_22 [(short)16] [i_6] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(arr_4 [i_6 + 1] [i_6 - 1])))), (max((arr_7 [i_6 - 1] [i_6 + 1]), (((/* implicit */unsigned long long int) arr_4 [i_6 - 1] [i_6 - 1]))))));
                var_33 ^= ((/* implicit */long long int) (~(17679522730408287143ULL)));
            }
        } 
    } 
}
