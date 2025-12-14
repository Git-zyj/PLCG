/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24051
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
    var_15 = ((/* implicit */int) min(((((_Bool)1) ? (((((/* implicit */_Bool) 3823999960605843601ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_0)) ? (878258601U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))))));
    var_16 = ((/* implicit */unsigned long long int) 2171539245U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 1258504982017656294ULL)));
                    arr_11 [(_Bool)1] [(_Bool)1] [i_2] [i_0] = ((/* implicit */_Bool) (-(arr_3 [i_2 - 3] [i_1] [i_0])));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_14);
                    arr_13 [i_1] [i_0] = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)254))));
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 17188239091691895347ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_12)))) ? (((/* implicit */int) ((_Bool) (unsigned char)254))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (var_3)))))), (((/* implicit */int) ((((((/* implicit */int) arr_21 [i_4] [i_3])) & (((/* implicit */int) var_10)))) < (((/* implicit */int) ((_Bool) var_13))))))));
            var_19 = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [13LL] [i_3] [i_4]))) >= (((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_4]))))))) ? (min((((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2302225969U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_3] [i_3] [i_3]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_3] [i_3] [i_4]))))));
        }
        for (unsigned int i_5 = 3; i_5 < 11; i_5 += 3) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_20 [6ULL]), (((/* implicit */short) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (var_12)))))) ? (((/* implicit */int) (!(arr_23 [i_5 - 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (2251799813685247LL) : (5614937799549079648LL))))))))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15323751707789837130ULL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149)))));
        }
        var_22 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 2806863218U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))))) > (((((/* implicit */_Bool) (unsigned char)194)) ? (-3415062592534396227LL) : ((-9223372036854775807LL - 1LL))))));
        var_23 = ((/* implicit */unsigned int) arr_23 [i_3]);
        var_24 = ((/* implicit */unsigned char) ((long long int) ((min((var_2), (((/* implicit */unsigned long long int) var_8)))) >= (((/* implicit */unsigned long long int) ((arr_7 [i_3]) << (((arr_6 [(signed char)10] [(signed char)17]) - (3612540851115703704LL)))))))));
        var_25 = ((/* implicit */_Bool) (unsigned char)33);
    }
}
