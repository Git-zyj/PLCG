/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30668
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
    var_20 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))))), (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 697795659)) : (var_13))))))) : (((/* implicit */int) var_5)));
    var_21 = ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (var_13))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (var_6)))))) ? ((~(max((((/* implicit */long long int) (short)11702)), (-4596331799868811356LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_5)))))) >= (max((var_2), (((/* implicit */unsigned long long int) var_3)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_3 [i_0 - 1])))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-1)))) || (((((/* implicit */unsigned long long int) ((arr_5 [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_7))))) == (((((/* implicit */unsigned long long int) 1974769947)) | (arr_1 [i_0])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                var_24 = ((/* implicit */int) arr_2 [i_0 - 1]);
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_1] [(unsigned char)17])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (arr_4 [i_0] [i_0]))))));
                var_26 *= ((/* implicit */int) arr_7 [i_2] [i_2] [1LL] [1LL]);
                var_27 = ((/* implicit */long long int) min((var_27), (-2328217887032349286LL)));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_28 = arr_6 [i_0 - 1] [i_1] [i_3];
                arr_10 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) max((((((((arr_5 [i_0]) ? (-4596331799868811363LL) : (4596331799868811361LL))) + (9223372036854775807LL))) << (((max((arr_8 [i_0] [i_1] [i_1]), (((/* implicit */long long int) arr_5 [i_1])))) - (1LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -4596331799868811363LL)))))));
                var_29 = ((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) var_16))));
            }
            /* vectorizable */
            for (short i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7384125865681563002LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)31677))))) : ((+(arr_6 [i_0] [(_Bool)1] [(_Bool)1])))));
                var_31 = ((/* implicit */signed char) (~((-(-127198581)))));
                var_32 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 4596331799868811364LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))));
            }
            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (!(((/* implicit */_Bool) 4176903519U)))))));
            arr_14 [i_0] = max((min((arr_12 [(signed char)18] [(signed char)18] [(signed char)18] [i_0 - 1]), (arr_12 [i_1] [4] [4] [i_0 - 1]))), (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (arr_12 [i_1] [(signed char)10] [(signed char)10] [i_0 - 1]))));
        }
    }
    var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
}
