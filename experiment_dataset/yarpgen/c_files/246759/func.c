/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246759
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
    var_20 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)156)))) != ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)5235)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        var_21 -= ((/* implicit */long long int) ((((/* implicit */int) (short)-9188)) * (((/* implicit */int) (unsigned short)39975))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (signed char)0))))));
        arr_4 [(_Bool)1] [i_0 + 1] = (~(((/* implicit */int) (_Bool)0)));
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)2))) / (-840224817817631725LL)));
        var_23 = ((/* implicit */unsigned short) (~(3626987612U)));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)2)) & ((~(((/* implicit */int) (_Bool)1))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (65535ULL)))));
        var_25 *= ((/* implicit */signed char) ((int) ((unsigned int) 3918576187313947632ULL)));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_9 [i_1] [i_2] = ((_Bool) ((((/* implicit */int) (unsigned short)43522)) & (((/* implicit */int) (unsigned short)28274))));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!((((!(((/* implicit */_Bool) 18446744073709551615ULL)))) || ((!(((/* implicit */_Bool) 17788552967050827083ULL))))))));
            var_26 = ((/* implicit */_Bool) 8126464ULL);
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned int i_5 = 1; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)28)) || ((_Bool)1)))) / (((((/* implicit */int) (signed char)107)) >> (1U)))))))));
                            var_28 *= ((/* implicit */unsigned long long int) (((+(((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (_Bool)0)))))) - (((/* implicit */int) ((signed char) 1364834871880661065ULL)))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */signed char) max((var_29), ((signed char)0)));
        }
        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            arr_21 [i_1] = (~((~(0ULL))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                var_30 = (-((-(-1686572571))));
                arr_24 [i_1] [i_1] [i_7] = ((/* implicit */int) ((long long int) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)43306)))))));
                arr_25 [i_1] [(signed char)23] [i_7] [i_6] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) (signed char)33)) & (-1686572571))))));
                arr_26 [i_1] [i_6] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)1))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1)))))));
                arr_27 [i_1] [i_6] [i_7] = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)1792))))));
            }
        }
    }
    var_31 = ((/* implicit */_Bool) var_14);
}
