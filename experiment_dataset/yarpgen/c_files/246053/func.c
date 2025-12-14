/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246053
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24400))) ^ (arr_2 [i_0 + 3])));
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) arr_4 [i_1 - 2] [i_0 - 1] [i_0]))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((131056U) == (((/* implicit */unsigned int) (-2147483647 - 1)))));
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1920))))) ^ (((/* implicit */unsigned long long int) (-(var_0)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [5ULL] [i_1] = 1229725168;
                }
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60191)) || (((((/* implicit */unsigned int) ((/* implicit */int) (short)12839))) > (4095U)))));
                    var_16 = ((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [11U]);
                }
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                {
                    arr_18 [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0 + 2] [i_0]);
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 15; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) min((9223372036854775792LL), (((/* implicit */long long int) (unsigned char)97))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15138720741253082036ULL)) ? (511) : (((/* implicit */int) var_10))))) ? (((10520612673561073836ULL) & (10168839124581324907ULL))) : (((/* implicit */unsigned long long int) -8736589128784374602LL))))));
                                arr_24 [i_1] [(short)5] [11ULL] [i_1 - 2] [i_1] = ((/* implicit */unsigned long long int) 170090372);
                                arr_25 [i_1] [i_1] [i_6] [i_1] [i_0] = ((((((((/* implicit */int) (unsigned char)127)) ^ (((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2])))) / (((/* implicit */int) arr_7 [i_8 - 1] [i_6])))) != ((+(var_5))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))));
                    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(-334092700))))));
                }
                var_20 += ((/* implicit */short) (~((+(arr_0 [i_1] [i_1 - 1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((short) var_10));
    /* LoopNest 3 */
    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_11])) ? (((/* implicit */unsigned long long int) arr_26 [i_10])) : (18446744073709551597ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) : (((arr_26 [i_9]) | (arr_26 [i_9])))));
                    arr_33 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) arr_30 [i_11] [i_9] [i_11]);
                    var_23 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_27 [i_11])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28304)))))));
                    arr_34 [i_9] [18U] = ((/* implicit */int) (!(((/* implicit */_Bool) ((133884578915944338ULL) << (((/* implicit */int) ((1575209159717044331ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-512)))))))))));
                    var_24 += ((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_30 [i_11] [12ULL] [i_9])), (var_8))) / ((-(((/* implicit */int) arr_27 [i_9]))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) > (((/* implicit */int) var_3))));
}
