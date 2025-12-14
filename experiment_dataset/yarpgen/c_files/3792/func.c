/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3792
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_15 |= ((/* implicit */short) var_6);
                    var_16 ^= ((/* implicit */unsigned long long int) ((unsigned short) 7121580557333977904ULL));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned int) var_1);
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    arr_15 [i_0] [i_0] [i_3] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-42))) <= (((((/* implicit */_Bool) -8568178893530573504LL)) ? (-8568178893530573478LL) : (((/* implicit */long long int) var_2))))))), (arr_11 [i_3] [i_3])));
                    var_17 = ((/* implicit */_Bool) min((-8568178893530573501LL), (((/* implicit */long long int) (unsigned short)22385))));
                    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((-8568178893530573507LL), (((/* implicit */long long int) (signed char)33))))) ? ((+(7306976039794241553LL))) : (((/* implicit */long long int) ((unsigned int) 1844885045U))))) < ((+(9187343239835811840LL)))));
                    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((-4769552701054152312LL) > (((/* implicit */long long int) (~(((/* implicit */int) (signed char)75))))))))));
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) 7121580557333977905ULL);
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0]);
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
            var_21 ^= ((/* implicit */unsigned int) ((unsigned char) var_10));
            var_22 = ((/* implicit */_Bool) max((var_22), (min((((((/* implicit */int) var_5)) != (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) 601829967U)) && (((/* implicit */_Bool) 6761279406194527997ULL))))))));
        }
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2349932583U)))))) : ((-(var_9))))), (((/* implicit */unsigned long long int) min(((unsigned char)181), (((/* implicit */unsigned char) max(((signed char)107), ((signed char)66))))))))))));
}
