/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244420
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (signed char)-100))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-100)))) : (max((((/* implicit */unsigned int) var_4)), (var_9)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)100)) || (((/* implicit */_Bool) var_1))))), (var_11))))));
    var_13 = ((/* implicit */short) (-(min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (signed char)50))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) 6474383280077358641ULL)))))), (min((6474383280077358641ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
        arr_4 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 911112017)) + (var_2)))) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_14 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 911112017)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2115140619U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)53567)) : (((/* implicit */int) (unsigned short)25313))))))) || (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))))))));
        var_15 = ((/* implicit */long long int) arr_2 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (unsigned char)255))))))));
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_17 |= ((/* implicit */short) (unsigned char)142);
                var_18 = ((/* implicit */_Bool) min((9223372036854775805LL), (((/* implicit */long long int) (_Bool)0))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_19 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((144115188075855872ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-50)))))), (0ULL)));
                arr_14 [i_1] [i_1] [i_2 - 1] [i_4] = ((/* implicit */unsigned int) ((signed char) 5177360178252259583LL));
            }
            for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                arr_17 [(unsigned char)16] [i_2 - 2] [(unsigned char)16] [(unsigned char)16] &= ((/* implicit */long long int) min((18302628885633695744ULL), (((/* implicit */unsigned long long int) -6638763934218868566LL))));
                var_20 = ((/* implicit */signed char) arr_10 [i_1] [i_1] [i_1]);
            }
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_21 *= ((/* implicit */signed char) arr_0 [i_1]);
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            arr_28 [i_1] [i_6] [i_7] [i_6] [i_1] = ((/* implicit */unsigned char) (~(var_6)));
                            var_22 = ((/* implicit */unsigned char) 6638763934218868565LL);
                            arr_29 [i_1] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
                            var_23 = (unsigned char)166;
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_26 [i_1] [i_1] [(unsigned char)18] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) 5177360178252259572LL)) : (var_1))))))));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_24 [i_1] [i_1] [i_1] [(unsigned char)6]))));
    }
    var_26 = ((((/* implicit */_Bool) var_9)) ? (var_2) : (var_2));
    var_27 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))) ? (2044599299U) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)22240)) <= (((/* implicit */int) var_7)))) ? (((/* implicit */int) ((short) 613955044))) : (((/* implicit */int) min((var_5), ((_Bool)1)))))))));
}
