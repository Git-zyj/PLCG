/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41119
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                        arr_13 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)58686);
                        arr_14 [i_0] [i_0] [i_0] [7U] = ((/* implicit */long long int) arr_11 [i_0]);
                        arr_15 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_1] [i_0] [i_3])), ((unsigned char)38)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)113)) : (-230561460)))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((595529621U) <= (arr_3 [i_0]))))));
        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((max((arr_3 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) (unsigned short)55268))))), ((-(4701897917452395372LL)))));
        arr_16 [i_0] [i_0] = ((/* implicit */int) (((((!(((/* implicit */_Bool) arr_8 [1ULL])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)18071))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))) : (arr_3 [i_0]))))) <= (((/* implicit */unsigned int) ((arr_8 [i_0]) ^ (((((/* implicit */_Bool) -15)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (-1822665494))))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_16 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_9 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)48)) <= (arr_7 [i_4] [i_4]))))) : ((-(4164537481U)))));
        arr_21 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1386401967)) & (arr_11 [i_4])))) ? (((((/* implicit */unsigned long long int) -5774164352070539774LL)) / (arr_18 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))));
    }
    for (signed char i_5 = 2; i_5 < 18; i_5 += 2) 
    {
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-1386401985))))));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19686)) ? (((/* implicit */int) (unsigned char)137)) : (-1))))))));
            var_18 = ((/* implicit */unsigned long long int) (signed char)20);
        }
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)-18694))) % (max((((/* implicit */unsigned int) arr_31 [(unsigned char)4] [i_5])), (arr_30 [i_5] [i_7] [i_5])))))));
                    arr_33 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8519803299746852452LL)) ? (8533092704397361340ULL) : (((/* implicit */unsigned long long int) (~(2U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(arr_25 [i_5] [i_8])))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))))) : ((~((+(arr_30 [i_5 - 2] [i_7] [i_8])))))));
                    var_20 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_25 [i_7] [i_5 - 1])) >> (((/* implicit */int) arr_25 [10] [i_5 - 1]))))));
                    arr_34 [i_5 - 1] [i_7] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5])) ? (15821674503596499028ULL) : (((/* implicit */unsigned long long int) -36474265))))) ? (((/* implicit */unsigned long long int) ((arr_25 [i_7] [i_7]) ? (((/* implicit */int) arr_22 [i_8])) : (-1822665494)))) : (((12619114806277423652ULL) << (((((/* implicit */int) arr_31 [i_5] [i_7])) + (14196)))))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)16110))))), (min((arr_23 [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_26 [i_5] [i_5])))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                {
                    arr_41 [i_5] [i_5] [i_10] [i_10] = ((/* implicit */long long int) arr_25 [i_10] [8ULL]);
                    arr_42 [i_9] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_5] [i_5]))))) ? (((((/* implicit */_Bool) 4209307532U)) ? (((/* implicit */int) (short)7806)) : (((/* implicit */int) (unsigned char)242)))) : (((/* implicit */int) arr_25 [i_9] [i_9]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_5] [i_5 - 1])) * (((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */unsigned long long int) (-(-1386401983)))) : (((18446744073709551605ULL) / (((/* implicit */unsigned long long int) arr_39 [i_5 - 2] [i_9] [5ULL])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20)))));
                    arr_43 [i_10] [(short)3] [i_10] = arr_35 [i_5];
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 22; i_11 += 2) 
    {
        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) (-((((+(((/* implicit */int) (signed char)20)))) / (((/* implicit */int) max(((short)32758), (((/* implicit */short) (unsigned char)151)))))))));
                arr_51 [i_11] [15U] [i_12] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (10358375770288013566ULL) : (((/* implicit */unsigned long long int) arr_44 [i_11])))))))), (arr_50 [i_11] [i_11])));
                arr_52 [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) ((arr_46 [i_12]) % (((/* implicit */int) (short)(-32767 - 1)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (!((((!(((/* implicit */_Bool) var_12)))) && ((!(((/* implicit */_Bool) (unsigned char)143))))))));
}
