/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5194
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
    var_11 = ((/* implicit */long long int) min((min((min((var_2), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_7)))))), (((/* implicit */unsigned long long int) var_8))));
    var_12 += ((/* implicit */unsigned char) var_5);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) max((max((min((arr_1 [i_2]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))), (min((2194728288256ULL), (2194728288262ULL))))), (((/* implicit */unsigned long long int) var_6))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((8685830987292693813LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))))), (((/* implicit */long long int) arr_5 [i_0] [i_2]))))) == (((max((((/* implicit */unsigned long long int) (short)-23233)), (2194728288262ULL))) ^ (((/* implicit */unsigned long long int) (-(var_1))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)-3007)) ? (18446741878981263359ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))))), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0])))));
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
    {
        var_16 -= ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) min((arr_5 [(unsigned short)7] [i_3]), (arr_5 [(unsigned char)2] [i_3]))))) / (max((((/* implicit */long long int) var_5)), (arr_4 [i_3] [i_3])))))));
        var_17 *= ((/* implicit */unsigned int) var_10);
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -37990146251953680LL)) ? (var_9) : (((/* implicit */int) arr_7 [i_3]))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    arr_16 [i_4] [i_5] [i_5] [(signed char)3] = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_4]))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(var_9))))));
                    var_20 = ((/* implicit */int) (((-(2078738756))) >= (((/* implicit */int) arr_15 [i_4] [i_5] [i_6]))));
                    arr_17 [(_Bool)1] = (!(((/* implicit */_Bool) arr_8 [i_4])));
                    var_21 = ((/* implicit */long long int) var_3);
                }
            } 
        } 
        var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))) * (((((/* implicit */_Bool) -8685830987292693813LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8447))) : (18446741878981263364ULL)))));
        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_4] [i_4]))));
        var_24 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_5 [i_4] [i_4]))))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
    {
        arr_21 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(arr_18 [i_7]))), (((unsigned long long int) arr_19 [i_7] [i_7]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(var_1)))), (arr_18 [i_7]))))));
        var_25 += ((/* implicit */unsigned int) min((max((arr_19 [i_7] [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_20 [i_7] [i_7]))))))), ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7] [i_7]))) : (var_2)))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_5))));
        arr_22 [4] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_18 [i_7]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)127))))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)22189))))))), (((((/* implicit */_Bool) 8150967464469703126LL)) ? ((-(18446741878981263388ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)22207))))))))))));
        var_28 = ((/* implicit */unsigned int) (+(max((min((((/* implicit */unsigned long long int) (short)-8465)), (12880095491382587573ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_18 [1U]))))))));
        arr_25 [i_8] [i_8] = ((-8685830987292693813LL) != (((/* implicit */long long int) 695197699U)));
    }
    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
    {
        arr_30 [i_9] [i_9] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (min((min((var_2), (((/* implicit */unsigned long long int) arr_27 [i_9] [8])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))));
        arr_31 [i_9] [i_9] = ((/* implicit */_Bool) (~(((min((((/* implicit */unsigned long long int) arr_27 [i_9] [i_9])), (arr_19 [(unsigned char)7] [i_9]))) & (arr_19 [i_9] [i_9])))));
    }
}
