/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31473
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
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((min((((((/* implicit */_Bool) (short)10697)) ? (((/* implicit */int) (short)-10681)) : (((/* implicit */int) (short)-10681)))), (((/* implicit */int) (short)10697)))) + (10690)))));
                            var_13 += ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                            var_14 = ((/* implicit */signed char) max((((/* implicit */int) arr_1 [(_Bool)1])), (arr_4 [i_0] [i_0] [i_3])));
                            var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) (short)10681)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                {
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) max((((/* implicit */long long int) 4294967270U)), (-8261007644727785875LL))))) + (((((/* implicit */_Bool) ((unsigned char) 26U))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_14 [i_4] [i_5] [i_6])) > (var_12)))) : (((/* implicit */int) ((short) arr_14 [i_4] [(short)11] [i_6])))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 12; i_7 += 1) 
                    {
                        for (int i_8 = 3; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_18 &= (~(2323887793025115399ULL));
                                var_19 = ((/* implicit */unsigned long long int) ((unsigned short) 4294967270U));
                                var_20 = ((/* implicit */int) var_10);
                                arr_22 [i_4] [i_6] [i_6] [i_5] [i_8] |= (~((~(((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) arr_12 [i_4]);
                }
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 3; i_10 < 14; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            {
                                var_22 |= ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned short) (_Bool)0)), (var_11))));
                                arr_31 [i_4] [i_10 - 1] [i_4] [i_4] [14U] [(unsigned short)8] = (i_4 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)7846)) % ((-(((/* implicit */int) (short)14403)))))) % (((/* implicit */int) ((min((((/* implicit */unsigned long long int) 3493814235U)), (var_4))) <= (((/* implicit */unsigned long long int) (-(arr_4 [i_4] [i_10] [i_4])))))))))) : (((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)7846)) % ((-(((/* implicit */int) (short)14403)))))) * (((/* implicit */int) ((min((((/* implicit */unsigned long long int) 3493814235U)), (var_4))) <= (((/* implicit */unsigned long long int) (-(arr_4 [i_4] [i_10] [i_4]))))))))));
                                var_23 -= ((/* implicit */signed char) ((int) ((signed char) (short)-10681)));
                                var_24 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)12626))));
                                var_25 = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 15; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) arr_12 [i_4]);
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+((-(max((32U), (((/* implicit */unsigned int) var_11)))))))))));
                                arr_37 [(signed char)14] [i_5] [15ULL] [i_12] [i_4] [i_12] = ((signed char) ((((int) var_9)) < (arr_12 [i_4])));
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (short)-18787)) * (((/* implicit */int) (signed char)86)))))) ? (max((((/* implicit */int) max(((signed char)-64), (((/* implicit */signed char) arr_0 [i_9]))))), (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) arr_26 [(short)7])) : (((/* implicit */int) (short)3487)))))) : (((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_9] [(unsigned char)8] [i_13])) >= (max((((/* implicit */long long int) arr_20 [i_4] [i_5] [i_9] [i_5] [i_13] [i_9] [(signed char)10])), (-1LL)))))))))));
                            }
                        } 
                    } 
                }
                arr_38 [i_4] = ((/* implicit */signed char) (unsigned char)58);
                var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((unsigned char) arr_0 [i_4]))), (((unsigned short) arr_25 [i_4]))));
            }
        } 
    } 
    var_30 *= ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) var_8)), (var_4)))));
    var_31 = ((/* implicit */unsigned short) (-((~(var_4)))));
}
