/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215155
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
    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) var_16))));
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((12168471479181962898ULL) != (var_4)))) - ((~(((/* implicit */int) var_17)))))) == (((/* implicit */int) ((-619699341) < (((/* implicit */int) var_11)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned long long int) 2147483642)), (var_1))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = (+(2147483636));
            var_21 = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
        }
        for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            var_22 = (!(((/* implicit */_Bool) ((signed char) var_12))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 50331648);
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_16 [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -50331666)) ? (50331648) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_5] [i_0])))))));
                            var_23 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((min((2147483643), (((/* implicit */int) var_6)))) == ((+(805969139))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            var_24 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0])) && (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2147483634)) && (((/* implicit */_Bool) 5270761310410105828ULL)))))) >= (min((((/* implicit */unsigned long long int) (unsigned short)32768)), (12382871452179994105ULL)))))));
            arr_20 [i_6] = ((/* implicit */unsigned int) max((min((((/* implicit */int) var_16)), (var_7))), (((/* implicit */int) (!(((((/* implicit */_Bool) 237965920U)) && (((/* implicit */_Bool) var_17)))))))));
            /* LoopSeq 3 */
            for (signed char i_7 = 2; i_7 < 15; i_7 += 1) 
            {
                arr_23 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) (~(-7553646267605979939LL))))));
                var_26 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned char)180)) && (((/* implicit */_Bool) (signed char)-75))))));
            }
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    arr_29 [i_8 + 1] [i_8] [i_8] [4] = ((/* implicit */unsigned short) -9130512393785642271LL);
                    arr_30 [i_0] &= ((/* implicit */_Bool) 1494216953);
                    arr_31 [i_8] = ((/* implicit */short) var_4);
                }
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        {
                            arr_38 [i_0] [i_6] [(short)10] [i_10] [i_8] = var_17;
                            var_27 = ((/* implicit */unsigned short) arr_8 [i_8 + 2] [i_11]);
                            arr_39 [i_8] = ((/* implicit */signed char) arr_32 [i_0] [i_6] [i_8 + 2] [i_6] [i_0] [i_11]);
                            arr_40 [i_11] [i_10] [i_8] [i_6] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) (~(1494216953))))))) == (((((/* implicit */int) arr_12 [i_8 + 3] [i_8 + 2])) | (2147483642))));
                        }
                    } 
                } 
            }
            for (unsigned short i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_13 = 1; i_13 < 14; i_13 += 4) 
                {
                    arr_46 [i_13] [i_12] [i_6] [i_6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)2)) | ((-2147483647 - 1))))) ? (((/* implicit */long long int) var_7)) : (4262095156482487826LL)))) ? (min((15203223431837746034ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)7)))))));
                    var_28 ^= max((arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((-(316674666))));
                    arr_47 [i_0] [i_6] [i_12] [i_6] = ((/* implicit */unsigned long long int) var_3);
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
                {
                    arr_50 [i_0] [i_0] [i_14] [i_14] [i_0] = ((/* implicit */short) ((int) ((2085530131537624724LL) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_12 + 3]))))));
                    arr_51 [i_0] [i_12] = ((/* implicit */int) ((-2793445999290466078LL) / (1506355925775197266LL)));
                    var_29 ^= ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) 4057001375U)) == (16621716165199452989ULL)))));
                    var_30 ^= ((/* implicit */_Bool) ((arr_27 [i_12 + 1] [i_12 + 1] [i_12 + 2]) & (((arr_27 [i_12 + 2] [i_12 + 1] [i_12 - 1]) << (((arr_27 [i_12 + 1] [i_12 + 1] [i_12 + 2]) - (1195010741938972251ULL)))))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)157)))))) >= (((unsigned long long int) var_2))));
                    arr_56 [i_0] [i_6] [i_12] [i_12] [i_12] [i_15] = min((arr_35 [i_12 - 1] [i_15] [i_15] [i_12 + 1]), (min((((unsigned int) (signed char)69)), (((/* implicit */unsigned int) ((4720327665933466114ULL) < (((/* implicit */unsigned long long int) 2817493095U))))))));
                    arr_57 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)201)), ((unsigned short)35155)))) || (((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_12 + 3])))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
                {
                    var_32 ^= ((/* implicit */int) var_2);
                    arr_61 [i_0] = ((/* implicit */unsigned long long int) (signed char)-15);
                    var_33 *= ((/* implicit */int) ((min((((7553646267605979927LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)34))))), (((((/* implicit */_Bool) 13726416407776085507ULL)) || (((/* implicit */_Bool) (signed char)27)))))) && (((/* implicit */_Bool) max(((-(13726416407776085507ULL))), (9493776953827760952ULL))))));
                }
            }
        }
    }
}
