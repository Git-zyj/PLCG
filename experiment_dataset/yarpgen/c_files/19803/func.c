/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19803
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) var_0);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_5 [i_0] [(signed char)8] [(signed char)8])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 2])))))), (((/* implicit */int) min(((unsigned short)41541), (((/* implicit */unsigned short) arr_4 [(short)9] [(short)9] [8U])))))));
                arr_8 [5ULL] [i_1 + 2] [i_0] = ((/* implicit */_Bool) ((short) (signed char)60));
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((-9223372036854775801LL) | (72057594037927936LL))) : (((((-9223372036854775799LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)23994)) - (23955))))))), (((var_3) ? (9223372036854775807LL) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                var_14 -= ((((/* implicit */int) arr_11 [i_2 + 1] [i_3] [i_4])) == (((/* implicit */int) (unsigned short)65535)));
                var_15 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) var_5)) ^ (-3680793222635384714LL))));
            }
            arr_18 [i_3] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_2)) & (((/* implicit */int) (short)13518))))));
        }
        var_16 = ((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */unsigned short) (short)17876)), (arr_16 [i_2] [18] [i_2 + 1])))), ((+(((((/* implicit */int) (short)17876)) - (((/* implicit */int) var_9))))))));
        var_17 -= ((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) ((short) (short)-13523)))));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_23 [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) 17551400860144953388ULL));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                for (short i_8 = 1; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)41532)) ? (var_4) : (1343397161391015370ULL)));
                        var_19 -= ((/* implicit */unsigned short) (short)-3390);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17224)) ^ (((/* implicit */int) arr_17 [9U] [9U] [(signed char)16]))));
                    }
                } 
            } 
            var_21 = var_6;
            arr_31 [i_5] [i_5] = ((/* implicit */unsigned char) 10003420706251307732ULL);
        }
        arr_32 [i_5] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (9223372036854775807LL)));
    }
    var_22 = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */short) ((72057594037927936LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))), (min(((short)-4054), (((/* implicit */short) (unsigned char)1)))))))));
    var_23 = ((/* implicit */_Bool) var_12);
}
