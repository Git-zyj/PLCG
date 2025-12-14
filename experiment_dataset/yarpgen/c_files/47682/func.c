/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47682
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
    var_11 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) (~((~(((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (+(min((min((-1926837115), (1267047736))), ((-(var_6)))))));
        var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_1 [i_0])), (arr_2 [i_0])))), (min((923929770326328511ULL), (((/* implicit */unsigned long long int) 1267047736))))));
        arr_4 [i_0] = ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (var_6)))), (var_10))) <= (((/* implicit */long long int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((min((18446744073709551612ULL), (((/* implicit */unsigned long long int) arr_0 [i_1])))), (((/* implicit */unsigned long long int) ((long long int) 1267047754))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 24; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) 1267047754);
            arr_11 [i_1] = ((/* implicit */unsigned long long int) var_10);
            var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_9 [i_2 - 2])))));
        }
    }
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-1289272687) : (-1289272686)))) ? (max((((/* implicit */long long int) 1267047754)), (68719476735LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)2]))))));
        arr_15 [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) ((_Bool) arr_9 [i_3]))) >> (((((long long int) 1267047765)) - (1267047761LL))))));
        var_17 = ((/* implicit */unsigned int) arr_13 [i_3]);
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_6) + (((/* implicit */int) arr_5 [(unsigned short)22])))), (((((/* implicit */int) (unsigned short)53986)) | (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) (+(var_9)))) : (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10821))) - (var_1))) / (((/* implicit */long long int) ((1926837115) / (((/* implicit */int) arr_1 [i_4])))))))));
            /* LoopSeq 1 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_21 [i_3] [i_3] [i_5] = ((/* implicit */_Bool) var_5);
                var_19 = ((/* implicit */_Bool) ((arr_13 [i_5 - 1]) - ((((_Bool)1) ? (arr_13 [i_5 - 1]) : (arr_13 [i_5 - 1])))));
                arr_22 [i_5] [i_4] [i_5 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_3])), ((+(var_5)))))) ? (((/* implicit */long long int) -1926837115)) : (var_10)));
                arr_23 [i_5] = ((/* implicit */long long int) (short)30463);
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_26 [i_3] [i_6] [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_26 [i_3] [(signed char)12] [i_3])))) : ((-((+(((/* implicit */int) (unsigned char)0))))))));
            var_21 = ((/* implicit */unsigned long long int) arr_24 [i_6]);
            var_22 = ((/* implicit */unsigned short) -1);
        }
        for (int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) ((arr_8 [i_7] [i_7]) | (((/* implicit */long long int) 0))));
            var_24 = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) (+(650885972)))) < (arr_25 [i_3] [i_7] [i_3]))));
            arr_30 [i_7] = ((/* implicit */unsigned int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24183))) - (1482470941311060496ULL))))) <= (min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) var_6)) - (17522814303383223105ULL)))))));
            arr_31 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) min((var_7), (((/* implicit */short) arr_10 [i_3] [i_7]))))), (((unsigned short) (unsigned short)8772))))) ? ((+(4171249879542148518LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_7]))))))));
        }
    }
    for (short i_8 = 2; i_8 < 8; i_8 += 4) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_8 + 1])) >> (((var_8) / (min((((/* implicit */unsigned long long int) var_1)), (arr_33 [7])))))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -560699074)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max(((unsigned short)0), (arr_5 [i_8])))))) : (((unsigned long long int) arr_14 [i_8 + 2]))));
    }
}
