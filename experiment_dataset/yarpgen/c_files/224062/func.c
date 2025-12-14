/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224062
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) -581588947)), (var_5))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */signed char) var_0))))))))) ? (min((((int) (unsigned char)87)), ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(var_10))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_15 = ((/* implicit */long long int) (signed char)-69);
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_16 |= ((/* implicit */long long int) (~((~((-(((/* implicit */int) (signed char)69))))))));
                var_17 *= ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_2])) - (78))))) & (((((/* implicit */int) arr_1 [i_1])) / (((/* implicit */int) (signed char)68))))));
            }
            for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                var_18 = ((/* implicit */int) 2947510254172827904LL);
                var_19 = ((/* implicit */unsigned long long int) ((signed char) arr_4 [i_1]));
                var_20 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_3 - 1] [i_3] [i_0])), ((-(arr_2 [i_1] [i_3]))))), (((min((2097151ULL), (((/* implicit */unsigned long long int) 557193805U)))) >> (((/* implicit */int) ((_Bool) var_2)))))));
            }
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15344))) : (3183456365U))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)76)) - (((/* implicit */int) min((arr_5 [i_1]), ((_Bool)1))))))))))));
        }
        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            var_22 -= ((/* implicit */_Bool) arr_6 [i_0] [(_Bool)0]);
            var_23 += ((/* implicit */unsigned char) (~(((1326505887U) / (arr_7 [i_4 - 2] [i_4] [i_4 + 2] [10U])))));
            var_24 = ((/* implicit */_Bool) var_8);
            var_25 = ((/* implicit */_Bool) ((unsigned short) arr_6 [i_4 - 2] [i_4]));
        }
        var_26 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (signed char)69))));
    }
}
