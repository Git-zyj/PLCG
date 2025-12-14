/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195631
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((unsigned long long int) (-(((/* implicit */int) min(((unsigned short)21479), (((/* implicit */unsigned short) var_9))))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) -6568627400414066393LL));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_1);
            var_13 = ((/* implicit */unsigned short) (-(((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -6568627400414066393LL))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)44056)) ? (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [i_1])) : (((((/* implicit */_Bool) arr_8 [i_3] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2 + 3] [i_1])) : (var_5)))));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            arr_19 [16LL] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (signed char)34)))));
                            var_14 += ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_5 [7LL] [i_3] [i_2 + 4])))) + (2147483647))) << (((((/* implicit */int) var_9)) - (4)))));
                            var_15 = ((/* implicit */short) var_4);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((unsigned long long int) arr_13 [i_2 + 4])), ((+(arr_13 [i_2 - 1]))))))));
                            arr_24 [i_5] = ((/* implicit */unsigned int) arr_20 [13ULL] [i_1] [i_1] [i_1] [i_5] [i_1]);
                            arr_25 [(unsigned short)4] [i_5] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) var_4)))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_1] [(unsigned short)7] [i_2] [6U] [i_6] [i_6] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */long long int) (signed char)-34)), (arr_22 [i_2 + 3] [i_2 + 2] [i_2 + 3]))));
                            var_17 = ((/* implicit */_Bool) min((arr_13 [0]), (var_5)));
                            arr_31 [i_1] &= ((/* implicit */long long int) (unsigned short)21479);
                            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((((/* implicit */int) var_9)) != (((/* implicit */int) arr_4 [i_3] [i_1])))))))));
                        }
                    }
                } 
            } 
        }
        var_19 = ((/* implicit */unsigned int) var_5);
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        arr_34 [i_7] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_33 [i_7])))) % (min((((/* implicit */long long int) 3971671985U)), (-6568627400414066393LL)))));
        var_20 = (+(arr_33 [i_7]));
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_38 [i_7] [3LL] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (short)16382))))));
            var_21 = ((/* implicit */_Bool) (-((((((-(((/* implicit */int) (unsigned short)65535)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))));
            var_22 += ((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned short)35408))))));
        }
    }
    for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            arr_45 [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) arr_41 [i_9] [i_9] [i_9]);
            var_23 += ((/* implicit */signed char) -1593485328);
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_40 [i_11]))));
            arr_48 [i_11] = ((/* implicit */_Bool) (-(arr_40 [i_9])));
        }
        for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_9)), (arr_41 [i_12] [i_12] [i_9])))));
            var_26 = ((/* implicit */int) max((var_26), ((+((+(((/* implicit */int) (unsigned short)9))))))));
        }
        arr_51 [(_Bool)1] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_44 [i_9] [i_9]))))));
        arr_52 [i_9] [i_9] = ((/* implicit */short) (-(max((((/* implicit */unsigned int) ((_Bool) (unsigned char)7))), ((((_Bool)1) ? (arr_46 [i_9] [14]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
    }
    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 3; i_15 < 15; i_15 += 3) 
            {
                for (signed char i_16 = 1; i_16 < 15; i_16 += 4) 
                {
                    {
                        arr_65 [(unsigned short)8] [i_16] [i_15] [i_14] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-2618620400703242066LL), (((/* implicit */long long int) (unsigned short)44056))))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)62843)))))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) ^ (((((/* implicit */_Bool) -4254053289287161437LL)) ? (arr_1 [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_16] [0LL])))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((-6568627400414066393LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))))))))) : (max((arr_33 [i_15 + 2]), (((/* implicit */long long int) arr_55 [i_16 - 1])))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 17; i_18 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) max((-6568627400414066393LL), (min((arr_22 [i_17 + 1] [i_18] [i_18]), (arr_22 [i_17 + 1] [i_17] [i_18]))))))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) & (arr_28 [i_17 + 1] [i_17] [i_17] [i_14])))))));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)26094)))))));
        var_31 += arr_23 [i_13] [i_13] [i_13] [i_13] [i_13];
        var_32 += ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)156))) - (arr_40 [i_13]))) & (((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 231542456))))))))));
        var_33 = (-(((-2792330006718014614LL) + (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_13] [i_13] [i_13] [i_13] [i_13]))))));
    }
}
