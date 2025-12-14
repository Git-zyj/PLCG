/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244031
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((unsigned char) min(((_Bool)1), ((_Bool)1)))))));
                                var_15 = ((/* implicit */short) ((int) var_7));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)2));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(arr_10 [i_0 - 1] [i_0] [i_1 - 1] [i_1] [i_2] [24] [i_2])))), (var_8)))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (int i_6 = 2; i_6 < 13; i_6 += 2) 
        {
            {
                var_18 ^= ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) arr_7 [i_5] [i_5] [(signed char)17] [i_5] [i_6 - 2])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (short i_8 = 2; i_8 < 14; i_8 += 4) 
                    {
                        for (int i_9 = 3; i_9 < 14; i_9 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((((/* implicit */int) var_12)) << (((((/* implicit */int) var_9)) + (2751)))))))) == (min((((/* implicit */unsigned int) arr_8 [i_8 - 1] [i_9 - 3] [i_9] [i_9 - 3])), (var_7)))));
                                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min(((!((_Bool)1))), ((_Bool)1)))), ((~(max((1796678798), (((/* implicit */int) arr_14 [i_7] [i_8 + 1] [i_9]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 2; i_10 < 17; i_10 += 2) 
    {
        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            {
                var_21 ^= ((/* implicit */short) max((min((((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned char)242)))), (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (unsigned char)22))))));
                /* LoopSeq 1 */
                for (unsigned int i_12 = 3; i_12 < 18; i_12 += 2) 
                {
                    var_22 = ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)39097))))))) ? (((unsigned int) -1796678814)) : (max((max((var_7), (((/* implicit */unsigned int) var_1)))), (((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_27 [(unsigned char)0] [i_10 + 1]))))));
                    var_23 ^= ((((3733590364U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)18060))))) ? (((((/* implicit */_Bool) (unsigned short)22168)) ? (561376931U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 17; i_13 += 2) 
                    {
                        var_24 = ((/* implicit */short) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 561376926U)))) : ((~(arr_27 [i_10] [i_13])))));
                        var_25 &= ((((/* implicit */_Bool) (short)768)) || (((/* implicit */_Bool) arr_6 [i_10 + 1] [i_11] [i_11] [i_12] [(short)10])));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned short) -467631273)))));
                    }
                    var_27 = ((1796678798) * (((/* implicit */int) (_Bool)0)));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
                }
                arr_35 [i_10] [i_10] = ((/* implicit */_Bool) (unsigned short)51943);
                var_29 = ((/* implicit */unsigned int) var_2);
                /* LoopNest 3 */
                for (unsigned char i_14 = 1; i_14 < 17; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        for (short i_16 = 1; i_16 < 18; i_16 += 4) 
                        {
                            {
                                arr_43 [i_10] [i_11] [i_14 + 1] [i_14] [i_11] [i_14] [i_14] = ((/* implicit */int) var_7);
                                arr_44 [i_10] [i_11] [i_14] [i_10] [i_15] [i_16] = ((/* implicit */unsigned int) ((int) min((var_7), (((/* implicit */unsigned int) (_Bool)1)))));
                                var_30 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4269386243U)))));
                                var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)51929)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_25 [i_15]))) >> (((max((1728510089), (((/* implicit */int) (short)-32060)))) - (1728510045))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */long long int) (_Bool)1);
}
