/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213867
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned short) var_14);
        var_16 |= ((/* implicit */short) var_3);
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) max((-143375273), (-143375273)));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [i_1] = ((/* implicit */unsigned long long int) max((((arr_11 [i_1] [i_2] [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1885618834688115825ULL)) ? (-1736653281) : (((/* implicit */int) (unsigned short)5554))))) || (((((/* implicit */_Bool) -2034569151386587605LL)) && (((/* implicit */_Bool) (unsigned char)165))))))));
                    arr_13 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]);
                }
            } 
        } 
        arr_14 [i_1] [i_1] &= ((/* implicit */unsigned short) var_8);
        arr_15 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)209)) <= (((/* implicit */int) (short)16304))));
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_17 = ((unsigned long long int) arr_10 [i_4]);
        arr_19 [i_4] = (~((+(1760738588))));
    }
    var_18 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)48535))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((-434728843) > (max((-1332886269), (((/* implicit */int) (short)1)))))))) + ((((-(-8205665001842749515LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (short)-843)) : (((/* implicit */int) (unsigned short)0)))))))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (short i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                {
                    arr_27 [i_5] [i_5] [i_7 + 1] = ((/* implicit */short) (+(16392631594581014639ULL)));
                    var_20 = ((/* implicit */unsigned short) 2928774014997261207ULL);
                }
            } 
        } 
    } 
}
