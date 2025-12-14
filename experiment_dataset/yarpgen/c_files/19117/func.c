/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19117
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)118)) : (var_1)))))))));
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (~(max((((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned short)10753))))), (var_9))))))));
        var_12 ^= ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) var_7)) - (var_2)))));
        var_13 ^= ((/* implicit */signed char) ((long long int) max((var_3), (((/* implicit */unsigned long long int) var_2)))));
        var_14 -= ((/* implicit */long long int) ((var_6) - ((+(((/* implicit */int) (short)1442))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_8))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_2))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */_Bool) (~(min((max((arr_10 [i_1] [12ULL] [12ULL] [i_3]), (((/* implicit */unsigned long long int) arr_7 [i_1])))), (((/* implicit */unsigned long long int) var_0))))));
                                arr_17 [i_1] [i_3 - 1] [i_3] [i_1] [i_5] |= ((/* implicit */long long int) var_6);
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_3 - 1])) ? (var_2) : (((/* implicit */long long int) var_1)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9448))) & (-9105817699445955463LL)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            var_19 ^= ((/* implicit */long long int) (~(((/* implicit */int) max((((unsigned short) var_2)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))))))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (9223372036854775807LL))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                {
                    var_21 = var_2;
                    var_22 += ((/* implicit */long long int) (((_Bool)1) ? (1648074148) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) ((min((var_4), (((/* implicit */unsigned long long int) var_9)))) > (((/* implicit */unsigned long long int) var_1))))))))));
    var_24 *= ((/* implicit */unsigned char) ((signed char) var_7));
    var_25 -= ((/* implicit */unsigned short) var_4);
    var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65516)) ? (1955001443417733859ULL) : (((/* implicit */unsigned long long int) 1954443729379879475LL))));
}
