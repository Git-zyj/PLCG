/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34267
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
    var_20 = ((/* implicit */int) ((unsigned int) var_16));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (max((((/* implicit */long long int) arr_0 [i_0])), (3725140233873391498LL)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((arr_1 [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */long long int) max((((((/* implicit */int) ((signed char) (unsigned char)31))) >> (((((/* implicit */int) arr_4 [i_3] [i_0])) - (56))))), (((/* implicit */int) max(((unsigned char)31), ((unsigned char)15))))));
                        var_22 = ((/* implicit */unsigned short) ((long long int) (signed char)-84));
                        var_23 = (-(((long long int) ((unsigned char) (signed char)-81))));
                        var_24 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_0 [i_1 + 1])) >= (((/* implicit */int) arr_0 [i_1 + 1]))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) arr_4 [i_0] [i_0 - 1]);
    }
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) arr_11 [i_4]);
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)224)), (255))))));
        var_28 = ((/* implicit */unsigned short) (signed char)80);
        arr_14 [i_4] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_12 [i_4]), (((/* implicit */unsigned short) (signed char)-28))))) | (((((/* implicit */_Bool) -3434570301947959038LL)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (unsigned char)44))))));
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) - (arr_11 [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((unsigned short) arr_11 [i_4]))) : (((/* implicit */int) var_1)))))))));
    }
    /* LoopSeq 4 */
    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_30 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [(unsigned char)0])) - (var_9))))))), ((~((-(((/* implicit */int) (signed char)-84))))))));
        var_31 = ((/* implicit */int) ((max((((/* implicit */long long int) arr_15 [i_5])), (6LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_17 [i_5])) >= (((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */long long int) arr_17 [i_5])) : (var_16)))))))));
    }
    for (long long int i_6 = 1; i_6 < 18; i_6 += 2) 
    {
        var_32 = ((long long int) ((((/* implicit */int) arr_15 [i_6 - 1])) % (((/* implicit */int) arr_15 [i_6 - 1]))));
        var_33 = ((/* implicit */long long int) ((((arr_17 [i_6 + 1]) <= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)77)) >> (((1318566037) - (1318566022)))))))) ? (1658686225) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)35394)) == (((/* implicit */int) (signed char)-94)))))));
        var_34 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (signed char)79))))));
    }
    for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        var_35 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_19 [i_7 + 2]), (arr_19 [i_7 - 1]))))));
        var_36 = ((/* implicit */long long int) arr_11 [i_7 + 2]);
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 14; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        var_37 = ((/* implicit */int) (+(arr_13 [i_7] [i_7 + 3])));
                        var_38 *= max((var_13), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_7 + 1]))))));
                        var_39 = (unsigned char)19;
                    }
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        arr_35 [i_8] [i_8] = ((/* implicit */long long int) arr_17 [i_7 - 1]);
                        var_40 *= arr_19 [i_7 + 1];
                    }
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        for (long long int i_13 = 3; i_13 < 15; i_13 += 1) 
                        {
                            {
                                arr_41 [i_7] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(arr_33 [i_7] [i_8])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) arr_37 [i_7] [i_8] [i_8] [i_12] [i_13])) : (((/* implicit */int) arr_34 [i_8] [6LL] [6LL] [i_12]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_19))) / (arr_21 [i_7])))))));
                                var_41 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_39 [i_7] [i_13 - 1] [i_13] [i_13] [i_13] [i_13 - 3]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))) * (1499364129U)))));
                            }
                        } 
                    } 
                    arr_42 [i_7 + 2] [i_7] [i_8] [i_9] = ((/* implicit */signed char) 7300755332966287647LL);
                }
            } 
        } 
        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) arr_32 [i_7 + 2]))));
        arr_43 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) -1790870212))));
    }
    for (long long int i_14 = 3; i_14 < 10; i_14 += 1) 
    {
        var_43 = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) (unsigned char)254)))) ? (arr_46 [i_14]) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1714120554174080925LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) : (arr_44 [i_14]))))))));
        var_44 = ((/* implicit */long long int) (~(2795603151U)));
        var_45 *= arr_34 [(unsigned char)14] [(unsigned char)14] [(unsigned short)14] [i_14];
        /* LoopSeq 1 */
        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            var_46 |= (+(var_16));
            arr_49 [i_14] [i_15] = (unsigned char)142;
        }
    }
}
