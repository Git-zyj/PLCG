/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42113
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_13 = min((((unsigned char) 33554431ULL)), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            var_14 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (-1617470363) : (((/* implicit */int) var_1))))) == (((unsigned int) arr_4 [8] [(_Bool)1] [8]))))), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [(signed char)4])) ? (-846883965) : (1838218421)))));
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_6))));
        }
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            arr_11 [i_0 + 2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_0 [i_0])), (var_11)));
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_5 [i_0])) & (((/* implicit */int) (unsigned short)53549)))))), (((unsigned int) arr_6 [i_0] [i_0] [i_0 + 1]))));
                arr_14 [(_Bool)1] [i_0] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0] [i_3])) ? (((/* implicit */int) (unsigned short)65532)) : (-1617470363)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3772843465879358585ULL))))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)47858))) : ((~(((/* implicit */int) (_Bool)1))))));
                var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
            }
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 4095ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5656))) : (var_6)))))));
                var_19 = ((/* implicit */_Bool) ((signed char) arr_15 [i_0 - 1] [i_0] [i_0] [i_0 + 2]));
            }
            for (unsigned int i_5 = 3; i_5 < 23; i_5 += 3) 
            {
                arr_21 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((int) max((arr_7 [i_5 - 2] [i_5 - 2] [i_5]), (arr_7 [i_5] [i_5 - 1] [i_0]))));
                var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)47858))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_5 - 2] [i_0]))) : (((unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (var_7) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((-1762131817) != (((/* implicit */int) (_Bool)1))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned char)5)))))))));
                var_22 = ((/* implicit */int) var_1);
                arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) (((!(arr_1 [i_0] [i_0 + 1]))) ? (((((/* implicit */int) (unsigned char)228)) | (var_9))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_0 - 1]))))));
            }
            arr_25 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)125)) && (((/* implicit */_Bool) (short)6641)))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0 + 2])) > (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) var_9)) : (var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0] [i_0 + 2])) && (((/* implicit */_Bool) arr_5 [i_0]))))) : (((/* implicit */int) var_1))))));
            var_23 = ((/* implicit */_Bool) var_0);
        }
        var_24 = (unsigned char)157;
    }
    /* vectorizable */
    for (unsigned short i_7 = 1; i_7 < 22; i_7 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_7 - 1] [i_7] [14U])) ? (arr_13 [i_7 + 1] [i_7] [i_7 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned int) (~(arr_27 [i_7 + 2])));
    }
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((short) var_3)))));
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) ? ((+(7165233695897360050ULL))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6))))) : (((/* implicit */unsigned long long int) var_3))));
}
