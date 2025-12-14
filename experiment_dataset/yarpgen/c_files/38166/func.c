/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38166
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (var_0)))), (var_7))), (((/* implicit */unsigned long long int) var_9))))));
                    var_19 += ((/* implicit */int) var_5);
                    var_20 = ((/* implicit */unsigned long long int) var_4);
                }
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min(((unsigned short)124), (((/* implicit */unsigned short) ((_Bool) ((int) 565020797U))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27939)) ? (((/* implicit */int) (unsigned short)55057)) : (((/* implicit */int) var_11))))), (17061350489553594927ULL)))) ? (max((705709895U), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >> (((var_0) - (1272471387U)))))))) : (((/* implicit */unsigned int) 1713223593))));
                                var_23 ^= ((/* implicit */unsigned char) -3690384713887935054LL);
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (1385393584155956689ULL) : (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */long long int) ((var_2) / (((/* implicit */int) var_16))))) : (((long long int) 3690384713887935053LL))))));
                    arr_14 [i_0] [i_1] [i_1] [10ULL] = ((/* implicit */_Bool) var_16);
                }
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        arr_21 [i_0] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((_Bool) (short)-18167));
                        arr_22 [i_1] [i_1] [i_1] [i_1] = 17061350489553594944ULL;
                        var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((var_7) >> (((1385393584155956689ULL) - (1385393584155956644ULL))))))) / (((/* implicit */int) ((unsigned char) var_8)))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        arr_26 [i_0] [i_1] = ((/* implicit */short) ((unsigned long long int) max((302281569472794147ULL), (((/* implicit */unsigned long long int) 3)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            arr_29 [(unsigned short)10] [i_1] [i_6] [i_8] [i_9] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_7), (1385393584155956689ULL)))) ? (min((((/* implicit */long long int) var_4)), (-6830502823019065120LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (-3690384713887935043LL))))))), (((/* implicit */long long int) var_13))));
                            arr_30 [i_0] [i_1] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) var_17))), (((int) 231909183101599899LL))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-561))) % (max((var_10), (3422832203U)))))));
                            var_25 = ((unsigned long long int) min((var_10), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (var_17)))));
                            arr_31 [0LL] [i_1] [i_1] [(unsigned char)6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 12792401659315745944ULL)) ? (var_2) : (((/* implicit */int) min((var_16), (((/* implicit */unsigned short) var_8)))))))) >= (var_10)));
                        }
                        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) >> (((((/* implicit */_Bool) 3690384713887935053LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-18169)))))) ^ (((int) max((var_7), (4574734500911334735ULL))))));
                    }
                    arr_32 [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) 2700120842U);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
    {
        for (unsigned int i_11 = 1; i_11 < 14; i_11 += 1) 
        {
            {
                var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -231909183101599899LL)), (max((18446744073709551611ULL), (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_5)) : (var_13))))))));
                arr_39 [0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) (_Bool)1))))) << (((/* implicit */int) ((((/* implicit */_Bool) (short)27939)) && (((/* implicit */_Bool) var_15))))))), (((/* implicit */int) ((unsigned char) var_3)))));
            }
        } 
    } 
    var_28 |= ((/* implicit */unsigned short) ((unsigned long long int) ((short) min((var_8), (((/* implicit */short) var_9))))));
    var_29 = ((/* implicit */_Bool) min(((unsigned short)55644), (((/* implicit */unsigned short) (short)-27939))));
    var_30 = ((/* implicit */unsigned short) (_Bool)1);
}
