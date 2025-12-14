/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39474
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 *= max(((unsigned short)10525), ((unsigned short)9949));
        arr_4 [i_0] = ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_16))))) : (((long long int) (short)(-32767 - 1))))) >= (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) <= (arr_3 [i_0] [i_0])))), (var_3)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_8 [i_1] = 3221225472U;
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [6LL] [i_1]))) + (var_3)));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_1]))));
        var_21 = ((/* implicit */long long int) 8991720450255142256ULL);
        var_22 = ((/* implicit */unsigned short) var_13);
    }
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        var_23 = (unsigned short)61244;
        /* LoopSeq 2 */
        for (unsigned short i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */unsigned int) var_10)) : (var_14)))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (var_17)))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(8991720450255142271ULL)))))) ? (8991720450255142256ULL) : (((/* implicit */unsigned long long int) ((max((var_10), (var_5))) & (((/* implicit */int) var_12)))))));
            var_26 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)4291))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 1]))) % (var_3)))));
            var_27 += ((/* implicit */_Bool) var_11);
        }
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned short)4291)))) + (2147483647))) << (((max((((/* implicit */unsigned long long int) var_7)), (8991720450255142243ULL))) - (8991720450255142243ULL)))))) ? (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned short)3845))))))) : (8436073012834282223ULL)));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_19 [i_2] [i_4] [i_2] = ((short) (signed char)-57);
                arr_20 [i_2] [i_4] [i_5] [i_2] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) arr_1 [i_4] [i_5])) : (((/* implicit */int) var_8)))));
            }
            arr_21 [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) ((signed char) 9455023623454409373ULL))), (max((((/* implicit */unsigned int) ((var_5) / (-522223143)))), ((~(6U)))))));
            var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_5) & (((/* implicit */int) ((((/* implicit */int) (signed char)-43)) <= (((/* implicit */int) var_4))))))))));
        }
        var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-57))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_18 [8] [i_2])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_1)) : (1375047340)));
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)40806)) ? (((/* implicit */int) (unsigned short)1792)) : (((/* implicit */int) var_8))));
}
