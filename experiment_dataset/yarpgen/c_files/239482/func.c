/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239482
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) < (arr_1 [i_0])))));
        var_17 = ((/* implicit */unsigned char) min((arr_0 [i_0]), (((long long int) -171044012))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) ((signed char) var_13))))))));
                    var_18 = ((/* implicit */short) min(((signed char)70), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))))))))));
                    var_19 *= ((/* implicit */unsigned char) (~(arr_1 [i_2])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) arr_2 [i_4] [i_4]))));
            var_22 = ((/* implicit */int) (~(10558582313427702967ULL)));
            arr_15 [i_4] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned short)65529)))));
        }
        for (unsigned char i_5 = 2; i_5 < 23; i_5 += 2) 
        {
            var_23 = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5 + 2]))) : (arr_14 [i_5 + 1])));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_3] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-4868100771553093488LL))))));
            /* LoopSeq 1 */
            for (int i_6 = 3; i_6 < 21; i_6 += 2) 
            {
                arr_21 [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_6] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)32767))))) ? (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [(unsigned char)17] [i_6] [(unsigned char)17])))))));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_3])) / (((/* implicit */int) arr_19 [i_5])))))));
                arr_22 [i_6] [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_7) ? (var_1) : (arr_1 [i_3]))))));
            }
        }
    }
    /* LoopSeq 3 */
    for (unsigned char i_7 = 2; i_7 < 19; i_7 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_24 [(_Bool)1])), (((((/* implicit */int) arr_24 [i_7])) % (((/* implicit */int) ((_Bool) 1222517675))))))))));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_7), (arr_8 [i_7] [i_7] [i_7])))) | (((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */long long int) arr_7 [i_7 - 1] [i_7 - 2])), (arr_11 [i_7 - 1])))));
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_28 += ((/* implicit */unsigned char) arr_31 [i_7] [i_7] [i_7] [i_7] [i_7]);
                        arr_34 [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7] |= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_32 [i_9] [i_10] [i_10] [i_10 - 1] [i_10 - 1])) ? (min((((/* implicit */int) var_9)), (arr_32 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7]))) : (((/* implicit */int) var_12)))));
                    }
                } 
            } 
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)184)) || (((/* implicit */_Bool) (unsigned char)223)))))));
            var_30 = 1707031846039228881LL;
        }
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            arr_37 [i_7 - 1] [i_11] [i_11] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)65))))))), (min((((/* implicit */long long int) ((signed char) (short)-32763))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) * (arr_33 [i_11] [i_7] [i_11] [i_7] [i_7] [i_7])))))));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_13)))))) ? (((((/* implicit */_Bool) min((-10LL), (((/* implicit */long long int) (short)32767))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (_Bool)1)))))) : (min((-10LL), (1112562601463133437LL))))) : (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7] [i_7]))) : (-7917489415723230159LL))) / (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))))))));
            arr_38 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_8)))) + (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_11] [i_7] [i_11]))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (unsigned char)190)))));
            arr_39 [i_11] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-333)) ? (-937673716) : (((/* implicit */int) ((unsigned char) arr_4 [i_7 - 1] [i_11])))))));
        }
        arr_40 [i_7] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) arr_12 [i_7] [i_7 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7] [i_7 - 2]))) : ((+(arr_33 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7 + 1]))))));
        var_32 = ((/* implicit */_Bool) ((((int) arr_5 [i_7 - 1] [9] [i_7 - 2])) * ((-(((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 10; i_12 += 1) 
    {
        var_33 = ((/* implicit */short) ((((((/* implicit */int) var_5)) * (((/* implicit */int) arr_10 [i_12])))) < (((/* implicit */int) arr_2 [i_12] [i_12]))));
        var_34 = ((/* implicit */int) ((((long long int) 29LL)) % (((long long int) arr_29 [i_12] [i_12] [i_12]))));
        var_35 = var_4;
    }
    for (int i_13 = 0; i_13 < 24; i_13 += 2) 
    {
        var_36 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) (short)12425))), ((~(((/* implicit */int) (signed char)33))))));
        var_37 = ((/* implicit */_Bool) var_11);
        arr_46 [i_13] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_7 [i_13] [i_13])))), (((/* implicit */int) ((signed char) -1598051045)))));
    }
    /* LoopSeq 1 */
    for (long long int i_14 = 0; i_14 < 19; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 19; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (short)30964))));
                    var_39 = ((/* implicit */unsigned short) arr_25 [i_14] [i_15]);
                }
            } 
        } 
        arr_56 [5] = ((/* implicit */unsigned char) var_2);
    }
}
