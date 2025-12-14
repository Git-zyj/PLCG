/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191528
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
    var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4273167328392551970LL)) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) (unsigned char)15))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)4)) >> (((((/* implicit */int) var_6)) - (21534)))))))))) : (max(((+(var_10))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((signed char) (unsigned char)230)))));
        var_14 = ((/* implicit */unsigned long long int) -5735030401223037661LL);
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = (-(((arr_4 [i_1 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)230))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_1 - 1])), (max((arr_2 [i_1]), (arr_2 [(unsigned char)7])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (-4273167328392551970LL) : (((/* implicit */long long int) arr_1 [i_1]))))) : (arr_4 [(_Bool)1])));
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) var_9);
        var_16 = ((/* implicit */int) ((unsigned char) max((arr_6 [i_2]), (((/* implicit */unsigned long long int) arr_3 [i_2])))));
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (arr_0 [i_3])));
        arr_12 [i_3] &= ((/* implicit */unsigned char) arr_2 [i_3]);
        arr_13 [i_3] = ((/* implicit */unsigned char) var_6);
    }
    /* LoopNest 2 */
    for (long long int i_4 = 3; i_4 < 12; i_4 += 4) 
    {
        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            {
                arr_18 [i_4] [10LL] &= ((/* implicit */unsigned long long int) ((signed char) ((-642254051) % (((/* implicit */int) arr_7 [i_4] [(unsigned short)0])))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3)))))));
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    arr_22 [i_4] [i_4] [12U] [i_4 + 2] = ((signed char) ((_Bool) -4273167328392551966LL));
                    var_19 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((unsigned char) var_4))) << (((((/* implicit */int) (unsigned char)207)) - (192)))))));
                }
                for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    arr_25 [i_4] [(unsigned short)1] [13LL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_17 [i_4] [i_4 - 1]))))))) || (((_Bool) (-(((/* implicit */int) arr_3 [i_4])))))));
                    var_20 = ((/* implicit */unsigned short) (~(((int) (!(((/* implicit */_Bool) (signed char)-6)))))));
                    var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((signed char) 5735030401223037661LL))), (arr_2 [i_4 - 3])));
                }
                var_22 -= ((/* implicit */signed char) ((long long int) 14377373490999682671ULL));
            }
        } 
    } 
}
