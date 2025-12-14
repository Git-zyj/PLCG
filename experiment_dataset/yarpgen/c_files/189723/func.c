/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189723
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
    var_14 = ((/* implicit */long long int) var_10);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) 8472280384754583409ULL))))))));
        var_16 = ((/* implicit */unsigned char) ((_Bool) max((min((((/* implicit */unsigned long long int) 8431226264984765286LL)), (var_5))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8431226264984765299LL))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) -8431226264984765299LL)))) ? (max((((/* implicit */long long int) -295194128)), (-3899213278394508692LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_8 [i_1] [i_2] [i_2] [(unsigned short)13] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_2] [10LL] [i_2 + 1])))))));
                        arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) max((2715081199625646067LL), (((/* implicit */long long int) -321367052))))), (arr_9 [5U] [i_1] [5U] [i_1] [(_Bool)1] [(short)9]))), (max((((/* implicit */unsigned long long int) 3899213278394508692LL)), (17619979962341615193ULL)))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2715081199625646084LL)) ? (2715081199625646083LL) : (((/* implicit */long long int) -1370361845))))) ? (((/* implicit */unsigned long long int) min((728620026), (-728620027)))) : (((((/* implicit */unsigned long long int) 930819503)) / (arr_9 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 3] [i_0])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 4; i_4 < 13; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((arr_13 [i_4 - 4] [i_4 - 2]) % (arr_13 [i_4 - 1] [i_4 - 3])));
            var_18 = ((/* implicit */int) (~(arr_13 [i_4 - 1] [i_4 - 3])));
        }
        arr_20 [11U] = ((/* implicit */long long int) max((((unsigned int) 295194128)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-3899213278394508692LL), (((/* implicit */long long int) 231494962))))) ? (((930819503) / (1370361855))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_4 + 1]))))))))));
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) -2715081199625646079LL)))))), (var_12)));
    }
    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 295194142)) ? (((/* implicit */int) arr_22 [i_6] [i_6])) : (67108863)))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_22 [i_6] [i_6])), (930819503))))))));
        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)108)) : (-728620027)));
        var_22 = ((/* implicit */_Bool) -728620040);
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_23 [i_6] [i_7]), (((/* implicit */unsigned int) -930819503))))), (max((-3250054013839785954LL), (((/* implicit */long long int) arr_23 [i_6] [i_7]))))));
            var_24 += ((/* implicit */short) max((min((((/* implicit */unsigned long long int) -67108860)), (((unsigned long long int) 2529225568188019762ULL)))), (((/* implicit */unsigned long long int) -1LL))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */long long int) var_3)), (-2715081199625646079LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_23 [i_6] [i_6])))) : (min((((/* implicit */unsigned long long int) 930819503)), (15917518505521531882ULL)))));
        }
    }
}
