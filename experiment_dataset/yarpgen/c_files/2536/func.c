/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2536
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
    var_16 = var_9;
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) 140737487831040LL);
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(signed char)8]))))) ? (max((((((/* implicit */_Bool) 66846720)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), ((-(-140737487831040LL))))) : (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0] [i_0])), (-66846697)))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) % (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_0 [(signed char)0] [i_0]), ((signed char)-27)))) ? (max((-140737487831041LL), (-140737487831054LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))))) / (((/* implicit */long long int) max((((((/* implicit */_Bool) 140737487831041LL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (var_15))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */short) (unsigned short)45145);
        var_18 = ((/* implicit */long long int) arr_6 [i_1]);
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) arr_0 [i_1] [i_1])) : (((/* implicit */unsigned long long int) (~((~(-140737487831056LL))))))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) max((((unsigned int) (((_Bool)1) ? (14279160685917985998ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))), (((/* implicit */unsigned int) min((-336485240), (((/* implicit */int) arr_8 [i_1] [i_1])))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_15 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2] [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8937446565956999870ULL)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) arr_7 [(_Bool)1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_2])) < (1451960824)))) : (((/* implicit */int) arr_8 [i_2] [i_2]))))) : (min((-140737487831026LL), (((/* implicit */long long int) 1086268222))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_2] [i_2]) / (((/* implicit */unsigned long long int) -66846748))))) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_3])))))))));
            var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2] [i_3 + 2])) ? (((((/* implicit */_Bool) 7849497583407272193ULL)) ? (arr_12 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 1])))));
        }
        for (int i_4 = 2; i_4 < 17; i_4 += 4) 
        {
            arr_20 [(signed char)0] [i_4 + 2] = ((/* implicit */_Bool) (unsigned char)174);
            var_21 = ((/* implicit */unsigned int) 36028797018963967LL);
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */int) (_Bool)1);
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3968021763U)) ? (arr_21 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (arr_22 [i_5] [i_5]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8456)))));
                var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)9450))))), (arr_21 [i_5])));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    arr_32 [i_7] [i_5] [i_7] [i_5] [i_8] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_22 [i_5] [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)43527), (((/* implicit */unsigned short) (signed char)26))))))))) ? (-140737487831041LL) : (arr_21 [i_5])));
                    arr_33 [i_7] [i_7] [i_8] [(short)0] = ((/* implicit */unsigned short) max(((signed char)63), (arr_8 [i_6 + 1] [i_8])));
                    var_25 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)-1)) ? (arr_22 [i_6] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                }
            }
            var_26 -= ((/* implicit */int) arr_8 [i_5] [16U]);
        }
        for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            var_27 = ((/* implicit */signed char) 3440060409U);
            arr_38 [i_5] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5] [i_9])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8128)) || (arr_13 [i_5] [(unsigned short)5])))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
            var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_9])) ^ (((/* implicit */int) var_9))))), ((~(1006632960U)))));
            arr_39 [i_5] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_5] [i_9]), ((signed char)-119)))) ? (2374668214U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -453768800)) ? (-290786957) : (((/* implicit */int) arr_30 [i_9])))))))) && (((/* implicit */_Bool) ((arr_25 [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_28 [i_9] [i_9])) : (((/* implicit */int) arr_28 [i_9] [i_9])))))));
        }
        arr_40 [i_5] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)100)), (max((((((/* implicit */_Bool) var_13)) ? (134217727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_5] [14]))))), (((/* implicit */unsigned long long int) var_13))))));
    }
}
