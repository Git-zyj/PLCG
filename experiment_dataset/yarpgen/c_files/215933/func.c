/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215933
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)116)) << (((((/* implicit */int) (signed char)120)) - (107)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
            {
                var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4))))))) == (min((((/* implicit */int) (signed char)124)), ((-(((/* implicit */int) (signed char)5))))))));
                /* LoopSeq 1 */
                for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-127))));
                    var_12 = ((/* implicit */signed char) min((var_12), (((signed char) ((signed char) (signed char)-104)))));
                    arr_15 [i_0] [i_0] [i_2] [i_3] = (signed char)104;
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)-65))))))) ? (((/* implicit */int) arr_11 [i_0] [(signed char)8] [i_2] [i_0] [i_2])) : ((~(((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_3])) > (((/* implicit */int) var_6))))))))))));
                }
            }
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
            {
                var_14 = ((signed char) (signed char)-26);
                var_15 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_4]))));
            }
            for (signed char i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                var_16 ^= arr_17 [i_0] [i_0] [i_0] [i_5];
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-36)))), (((((/* implicit */_Bool) arr_8 [(signed char)0] [i_1] [i_5] [(signed char)0])) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) (signed char)103))))))) ? (((/* implicit */int) min(((signed char)36), ((signed char)25)))) : (((/* implicit */int) var_2)))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) max(((signed char)25), (arr_10 [i_0] [i_1] [i_1] [(signed char)16])))) : (((/* implicit */int) ((signed char) (signed char)-47)))));
                var_19 = arr_13 [i_0] [i_0];
            }
            arr_20 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) max((var_2), (arr_13 [i_0] [i_0]))))));
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (signed char)108))));
            /* LoopSeq 3 */
            for (signed char i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)-88)))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((signed char) (+(((/* implicit */int) (signed char)110)))))));
                var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (signed char)-29))));
            }
            for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                arr_26 [i_0] [i_0] = max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_8)))))), (arr_13 [i_0] [i_0]));
                arr_27 [i_0] [i_1] = var_3;
            }
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                arr_30 [i_0] [i_1] = (signed char)118;
                arr_31 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (signed char)3)) : (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) arr_1 [(signed char)1])) : (((/* implicit */int) (signed char)-47))))));
            }
        }
    }
    var_23 ^= ((signed char) var_6);
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            {
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_25 [i_10] [i_9] [i_9] [i_9])) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) arr_25 [i_9] [(signed char)10] [i_10] [i_10])))) != (((((/* implicit */int) (signed char)-72)) * (((/* implicit */int) (signed char)70)))))))));
                arr_36 [i_9] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (signed char)127)))));
                var_25 &= (signed char)56;
            }
        } 
    } 
    var_26 = var_3;
}
