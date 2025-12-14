/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210611
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_2 [i_0]))));
        var_17 |= ((/* implicit */unsigned short) ((unsigned char) (unsigned char)255));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (((+(-6541054546718863221LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned char) (-(min((((/* implicit */int) (unsigned char)255)), (-1268350173)))));
            arr_10 [i_2] [i_2] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            var_18 *= ((unsigned short) (unsigned char)255);
            arr_11 [9LL] [i_1] [2] = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
        }
        arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */signed char) var_5)), (arr_2 [i_1])))) | (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)1))))));
    }
    var_19 |= ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255))))));
}
