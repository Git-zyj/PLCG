/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3812
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(var_8))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned short) var_7)))))))) ? (((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((+(var_4))))) : (var_8)));
    var_13 = var_11;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_10))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))))) && (((/* implicit */_Bool) var_8))));
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) (+(min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)104)))))))));
        var_14 += ((/* implicit */unsigned short) min(((+(((((/* implicit */int) (unsigned char)0)) << (((var_3) - (1195333564382196284ULL))))))), (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))), (var_0))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) arr_4 [i_0 + 2]);
                            var_16 *= ((/* implicit */unsigned long long int) ((unsigned short) var_0));
                            arr_14 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_0 + 1] [i_0 + 1] [i_1 - 2] &= (+(min((var_8), (((/* implicit */unsigned long long int) arr_1 [i_1 - 2])))));
                        }
                    } 
                } 
            } 
            var_17 -= ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (var_2)))));
        }
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), (arr_6 [i_0] [i_5] [0ULL])))) ? (arr_9 [i_0] [i_0] [(signed char)18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) == (max((((/* implicit */unsigned long long int) (unsigned short)7090)), (((arr_12 [i_0 + 1]) & (var_6)))))));
            arr_18 [i_0] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)1)))))) != (var_11)))), (((unsigned short) var_2))));
            var_18 = min(((+((+(var_2))))), (max((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))))));
        }
    }
}
