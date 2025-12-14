/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240414
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (9095885646888892408ULL) : (max((((/* implicit */unsigned long long int) ((3471380258U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)10310)))))), (arr_0 [i_0 - 1] [i_0 + 1]))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_19 = ((/* implicit */_Bool) arr_0 [(signed char)9] [(unsigned short)8]);
            arr_5 [i_0] = arr_0 [i_0] [i_1];
            var_20 = ((/* implicit */int) (short)22601);
            arr_6 [i_1] |= (-(max((min((((/* implicit */unsigned long long int) (unsigned char)193)), (arr_4 [i_1]))), (min((arr_4 [i_1]), (((/* implicit */unsigned long long int) (short)6190)))))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned short)56791)) : (((/* implicit */int) (unsigned char)94))))) ? ((+(arr_0 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) -5538971168723392024LL)))))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_2 + 3])) % (((arr_7 [i_2 + 1]) ? (((/* implicit */int) arr_7 [i_2 + 2])) : (((/* implicit */int) arr_7 [i_2 + 3]))))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_12);
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
            var_23 = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) 1349667293U)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (unsigned short)5011)))), (((/* implicit */int) arr_7 [i_0 - 3]))))));
        }
        for (int i_3 = 4; i_3 < 19; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 1; i_4 < 20; i_4 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (max(((~(((/* implicit */int) (unsigned char)101)))), (((/* implicit */int) ((2078308130) != (2078308130)))))) : ((~(((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3])))))))))))));
                var_25 ^= min((17501895644541561264ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4782701036648852030LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (2945300002U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
                var_26 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_3]))));
            }
            for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_7 [(_Bool)1]))))));
                arr_19 [i_0] [i_0 - 3] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */short) arr_14 [i_0] [i_0])), (arr_17 [i_0]))), (((/* implicit */short) arr_13 [i_0] [i_3] [i_5 + 1]))))) ? (((((/* implicit */_Bool) ((signed char) 2379724443335114328ULL))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0])), (-1737320341049085911LL)))) : (((((/* implicit */_Bool) (unsigned short)55699)) ? (arr_12 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60525))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) arr_7 [i_0])), (arr_16 [19] [i_3 - 2] [i_3 - 2] [i_0])))) - (((/* implicit */int) ((arr_9 [i_0] [i_0] [i_5 + 1]) && (arr_1 [i_0])))))))));
            }
            var_28 |= (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3]))) % ((+(2945300003U)))))));
        }
        for (int i_6 = 4; i_6 < 19; i_6 += 4) /* same iter space */
        {
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) arr_16 [i_0 - 1] [i_0 - 3] [i_6 + 1] [i_6 + 1])), (arr_12 [i_0])))));
            var_29 -= ((/* implicit */unsigned short) 2150707822881124057ULL);
        }
    }
    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)99)), (max((((/* implicit */short) (unsigned char)139)), ((short)207)))))), (var_3))))));
}
