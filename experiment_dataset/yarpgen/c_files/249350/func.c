/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249350
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
    var_18 = ((/* implicit */short) (_Bool)1);
    var_19 = ((/* implicit */signed char) min((max((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (var_5)))))), (((/* implicit */long long int) (+((+(var_6))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_20 |= ((/* implicit */short) ((arr_3 [i_0] [i_0]) || (((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)1)))))))));
        var_21 -= ((/* implicit */_Bool) var_12);
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((((((/* implicit */int) arr_1 [i_0 + 1])) - (((/* implicit */int) var_2)))) + ((-(((/* implicit */int) arr_3 [i_0] [i_0 + 1])))))))))));
        var_23 -= ((/* implicit */unsigned char) ((short) ((_Bool) 5532760701279840876LL)));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_0 [i_0] [i_0 + 2]))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) min((((arr_5 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) / (arr_5 [i_1]))) ^ (((/* implicit */unsigned long long int) 944229709792609884LL))))));
        arr_8 [i_1] = ((/* implicit */_Bool) 5532760701279840876LL);
    }
    for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) min(((~(var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (var_4)))))))));
        var_26 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) % ((~(((((/* implicit */_Bool) (signed char)98)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_27 = ((/* implicit */short) arr_11 [i_4] [i_3]);
                        var_28 ^= ((/* implicit */_Bool) arr_4 [i_3 - 1]);
                        var_29 = ((/* implicit */unsigned int) min((((16890179898178767250ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_2] [4] [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) < (max((var_7), (((/* implicit */unsigned long long int) var_13)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (signed char i_7 = 1; i_7 < 19; i_7 += 4) 
            {
                {
                    var_30 ^= ((/* implicit */unsigned long long int) var_3);
                    arr_27 [i_2] [17LL] [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)71);
                    var_31 = ((/* implicit */long long int) (!(arr_25 [i_7] [i_7] [i_7 + 1])));
                    var_32 = ((/* implicit */_Bool) min((var_32), (arr_17 [i_2] [i_2])));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 2) 
    {
        var_33 = ((/* implicit */short) (+(((((unsigned long long int) -5532760701279840889LL)) << (((((((/* implicit */int) arr_25 [i_8 - 2] [i_8 - 2] [i_8 - 2])) << (((arr_26 [i_8]) - (1104667941))))) - (131043)))))));
        arr_30 [5ULL] = ((/* implicit */unsigned long long int) (!(((arr_16 [i_8] [i_8 + 1] [i_8] [i_8 + 1]) || (((/* implicit */_Bool) arr_12 [i_8] [i_8 + 1]))))));
        var_34 = var_0;
    }
    var_35 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) / (-944229709792609884LL)));
}
