/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220162
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
    var_19 = ((/* implicit */int) min(((~(((long long int) var_4)))), (((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_9 [i_2] [i_1] = ((/* implicit */short) -7295279484489293900LL);
                        arr_10 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 7)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) var_2))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))));
                    }
                    for (int i_4 = 2; i_4 < 18; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((3916782662U), (((/* implicit */unsigned int) max((((/* implicit */short) var_0)), ((short)-31639)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_15 [i_2] [(_Bool)1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) var_14);
                            var_22 += ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) 8965669793666029839LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4)))), (max((var_15), (((/* implicit */int) (short)7998)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))) >= (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) -4914358989665770187LL)) : (var_8)))))))))));
                            var_24 = max((((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) * (max((var_14), (((/* implicit */unsigned int) (signed char)31)))))));
                            var_25 = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (min((-8726786290663310712LL), (((/* implicit */long long int) 4294967285U))))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) max(((((_Bool)0) ? (-8726786290663310712LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (+(3322808845U))))));
                    }
                    arr_20 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_18)))))));
                    var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) var_9)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            var_28 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)7998)) ? (8726786290663310711LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
            var_29 -= ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_17)))));
        }
        /* LoopSeq 4 */
        for (unsigned short i_8 = 3; i_8 < 18; i_8 += 1) 
        {
            var_30 -= ((/* implicit */long long int) (((!(((((/* implicit */_Bool) (short)31632)) && (var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)31632)))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_17)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -8965669793666029813LL)) ? (((/* implicit */int) (unsigned short)9972)) : (((/* implicit */int) (short)(-32767 - 1)))))))))));
            arr_27 [i_0] [i_0] [i_8] = ((((/* implicit */_Bool) 802694213713336603LL)) ? (-802694213713336598LL) : (((/* implicit */long long int) -7)));
            arr_28 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_15)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (min((999276381987665269ULL), (((/* implicit */unsigned long long int) var_17))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((12816784224734275017ULL) >> (((((/* implicit */int) (short)-7423)) + (7466)))))) || (((/* implicit */_Bool) ((unsigned int) -7126334662734326488LL))))))));
        }
        /* vectorizable */
        for (long long int i_9 = 2; i_9 < 17; i_9 += 1) 
        {
            var_31 = ((/* implicit */short) (-(-802694213713336603LL)));
            arr_31 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))));
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
        {
            arr_34 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((unsigned char) 4453605802208598074LL));
            arr_35 [i_10] [i_10] = ((/* implicit */short) (+((+(((/* implicit */int) var_0))))));
            var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */unsigned long long int) var_7)) : ((+(var_8)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */int) (unsigned short)15864)) != ((~(var_15))))))));
                            arr_45 [i_10] [i_11] [i_10] = var_7;
                            var_34 -= (~(((/* implicit */int) var_9)));
                            var_35 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned char)86)) ? (var_8) : (((/* implicit */unsigned long long int) -7717140628169945426LL)))));
                            var_36 = ((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))));
                        }
                    } 
                } 
                arr_46 [12ULL] [i_10] [i_10] [i_11] = ((/* implicit */long long int) (-(18410715276690587648ULL)));
            }
        }
        for (short i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_15 = 1; i_15 < 19; i_15 += 4) 
            {
                for (long long int i_16 = 2; i_16 < 19; i_16 += 4) 
                {
                    {
                        arr_55 [i_15] [i_15 + 1] [i_15 - 1] [12LL] [i_15 + 1] [(_Bool)1] = ((/* implicit */int) ((_Bool) ((unsigned int) ((unsigned char) 79351697U))));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (+((~(((/* implicit */int) ((signed char) var_16))))))))));
                    }
                } 
            } 
            var_38 = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
            var_39 = ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (unsigned short)9724)))))) ? ((+((+(((/* implicit */int) var_10)))))) : ((((~(-21))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_10)))))));
        }
        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (-9) : (((/* implicit */int) var_11))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (signed char i_19 = 3; i_19 < 9; i_19 += 1) 
            {
                {
                    arr_66 [i_18] [i_18] [(short)9] [i_18] = ((var_0) || (var_6));
                    arr_67 [i_18] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)630))));
                }
            } 
        } 
        var_41 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)9730))));
    }
}
