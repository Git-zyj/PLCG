/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234966
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
    var_17 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) -8080963905972787750LL)) ? (-1589682154) : (((/* implicit */int) (unsigned char)126))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1589682154)) ? (((/* implicit */int) (unsigned char)85)) : (-1589682154))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) -123315942884922031LL);
                var_20 = ((/* implicit */signed char) max((123315942884922031LL), (((/* implicit */long long int) 2987475032U))));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned short) var_15);
    /* LoopSeq 2 */
    for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 4; i_3 < 16; i_3 += 3) 
        {
            var_22 = ((/* implicit */long long int) var_13);
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_9 [i_2 + 1] [10U] [12U]) : (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned long long int) (signed char)76)), (arr_8 [i_3 - 4] [i_3 - 2] [i_3 - 4]))))))));
        }
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                {
                    arr_15 [i_5] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_9 [i_5] [i_5 - 1] [i_5])))));
                    var_24 = ((/* implicit */unsigned long long int) (+(2081061861)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 2) 
        {
            for (unsigned short i_7 = 2; i_7 < 16; i_7 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 123315942884922030LL)) ? (var_8) : (0LL))), (((/* implicit */long long int) (signed char)-107))))))))));
                    var_26 = ((/* implicit */unsigned short) ((((long long int) arr_14 [i_7 + 2] [i_2 + 1])) * (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-6)), (arr_8 [i_8] [i_8] [i_8])))))))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-59)) && (((/* implicit */_Bool) 1503955369)))))));
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 15; i_10 += 4) 
            {
                for (unsigned int i_11 = 1; i_11 < 16; i_11 += 2) 
                {
                    {
                        var_29 = ((/* implicit */long long int) (signed char)32);
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) var_5))));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_28 [i_9] [i_11 - 1] [i_11 - 1] [i_9]))) && (((/* implicit */_Bool) arr_7 [(signed char)16]))));
                    }
                } 
            } 
            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -403406555629661671LL))));
        }
        for (signed char i_12 = 2; i_12 < 15; i_12 += 2) 
        {
            var_33 = ((/* implicit */long long int) 3437742919U);
            arr_36 [i_12] [1LL] [i_8] = ((/* implicit */unsigned char) ((_Bool) var_6));
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) ((signed char) (unsigned short)53366))) ? (max((((/* implicit */unsigned long long int) -403406555629661698LL)), (var_16))) : (11014074234241328705ULL)))));
        }
        arr_37 [i_8] = ((/* implicit */long long int) ((int) ((arr_9 [i_8] [i_8] [i_8]) + (arr_9 [i_8] [i_8] [i_8]))));
    }
}
