/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210523
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
    var_15 = ((/* implicit */unsigned char) ((((var_13) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 9007199237963776ULL)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (short)23693)))))) <= (min((((((/* implicit */_Bool) 9496101520662796336ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)(-127 - 1))))), ((~(((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 - 1] = (unsigned char)126;
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_2])) < (9007199237963773ULL))))) | ((+(arr_3 [i_0] [i_1] [i_2])))))));
                    var_17 = var_6;
                    var_18 = ((/* implicit */long long int) 12555967481670619986ULL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) >> (((var_12) - (1949062607))))) >> (((min((var_3), (arr_9 [i_0] [i_6]))) - (11646736106608130291ULL)))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_14 [i_0] [i_5 + 1] [i_4] [i_0 - 1] [i_4] [i_5])))));
                                var_20 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_15 [i_0 + 1] [i_3] [i_4] [i_5 + 2] [i_5 + 2] [i_6])))), (((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_3] [i_4] [i_5 + 1] [i_6] [i_3])) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_3] [i_0 - 1] [i_5] [i_6] [i_3])) : (((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0]))))));
                                arr_18 [i_0] [i_6] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)255), (arr_16 [i_0] [i_6] [i_0 + 1] [i_5 - 1])))) ? (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (18437736874471587849ULL) : (9007199237963776ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15374463431604999483ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [i_0]))))))) : (((max((15374463431604999465ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) << (((arr_3 [i_0] [i_0 + 2] [i_5 + 1]) - (3393143345U)))))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */short) min((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)30484)) - (30468))))), (((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]) + (((/* implicit */int) arr_17 [i_3] [i_0 + 1]))))));
                    var_22 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) (short)-26012)), (arr_3 [i_4] [i_0] [i_0])))))));
                }
            } 
        } 
    }
    for (short i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
    {
        arr_21 [(unsigned char)2] |= ((/* implicit */unsigned long long int) ((min((5890776592038931630ULL), (((/* implicit */unsigned long long int) 2648473485948853198LL)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) >> ((((~(var_3))) - (1243389151040523741ULL))))))));
        var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_7 + 2] [i_7] [i_7 + 2]))))) || (((/* implicit */_Bool) var_2))));
        arr_22 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_9 [i_7] [i_7 + 1]))) * (((/* implicit */int) max((arr_17 [i_7] [i_7 + 2]), (arr_17 [i_7] [i_7 + 1]))))));
        var_24 = ((/* implicit */long long int) (~(((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23896))) : (7511773699770380604LL))))));
    }
    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (3072280642104552133ULL)))) : (((((/* implicit */int) var_13)) % (((/* implicit */int) (short)-27015)))))) >= (min(((+(((/* implicit */int) var_11)))), ((~(((/* implicit */int) var_7))))))));
}
