/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189821
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 -= ((/* implicit */short) 69805794224242688ULL);
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((unsigned char) (short)384)))));
    }
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 209970046777318195LL)) && (((/* implicit */_Bool) min((2831382217768142762ULL), (((/* implicit */unsigned long long int) (unsigned char)222)))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) max((6247973689111578316LL), (((/* implicit */long long int) (signed char)113))))))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) var_6);
            var_17 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 15615361855941408853ULL))))), (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (var_5))))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_18 -= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)33344))));
            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) 3318298430U)) & (((6247973689111578316LL) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                var_20 = ((/* implicit */short) var_3);
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (short)32767))) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned char)10))));
                            arr_20 [i_5] [i_5] [17LL] [i_5] [i_1] = ((/* implicit */_Bool) 18376938279485308927ULL);
                        }
                    } 
                } 
                arr_21 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)384)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : (-2602173000574499234LL)))) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (signed char)-59))));
                var_22 = ((/* implicit */signed char) ((unsigned int) (short)28884));
            }
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                arr_24 [i_1] [(unsigned char)13] [i_7] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)34)) ? (108086391056891904LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11705)))));
                var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (4231191544U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)45964))));
                var_25 = ((long long int) var_8);
            }
        }
    }
    for (short i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) (+(14244230202547023751ULL)))))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((852793239U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((_Bool) var_8)))));
        var_28 = ((/* implicit */short) ((_Bool) ((unsigned char) 63775752U)));
    }
    for (short i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)1844)))))))));
            arr_34 [i_9] = ((/* implicit */unsigned int) ((short) var_7));
            var_30 |= ((/* implicit */unsigned char) (unsigned short)48085);
            arr_35 [i_9] [0LL] [i_9] = ((/* implicit */short) var_6);
        }
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            var_31 = ((/* implicit */unsigned long long int) (+(var_1)));
            var_32 = ((/* implicit */signed char) min((((/* implicit */long long int) ((2778788327U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (signed char)-22)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (6247973689111578316LL) : (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
            /* LoopSeq 3 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_33 = ((/* implicit */unsigned int) ((long long int) (unsigned short)47597));
                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)17439))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1178278993804600935LL) : (((/* implicit */long long int) 4294967295U))))) ? (var_10) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -1)) : (var_10)))))))))));
            }
            for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 1658405025933227721ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1407347197U)) && (((/* implicit */_Bool) 2280714113U))))) : (((/* implicit */int) ((((/* implicit */_Bool) 8265511937155652336ULL)) && (((/* implicit */_Bool) var_5)))))))) % (((unsigned long long int) (_Bool)1))));
                var_36 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3235939289U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (short)32747)))))) : (((((-23LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_11)) - (183))))))));
                arr_44 [i_9] [(signed char)1] [(signed char)9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3877562382U))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)32737)))))) ? (((((/* implicit */_Bool) (signed char)-32)) ? (-5366927073163053864LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))))) : (((/* implicit */long long int) ((unsigned int) var_7)))));
                arr_45 [i_9] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)59688);
            }
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
            {
                var_37 = ((unsigned int) (-(7160259082902115773LL)));
                var_38 = ((/* implicit */long long int) 3877562382U);
                var_39 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) 2014253163U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_6)))), (((/* implicit */int) ((short) 417404905U)))));
                var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)249)), (3379133174490131241ULL))))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        {
                            var_41 |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (((unsigned int) (~(var_10))))));
                            var_42 = ((/* implicit */int) -8814712097258041400LL);
                            arr_53 [i_9] [i_9] [i_14] [i_9] [i_14] [i_9] [(unsigned char)11] = ((/* implicit */unsigned char) min((5413055042475721287ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) (unsigned short)65516))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) (unsigned short)59669))))))));
                            var_43 += ((/* implicit */unsigned long long int) (unsigned char)255);
                            var_44 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_2))) << (((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (((unsigned int) (unsigned short)64971))))));
                        }
                    } 
                } 
            }
        }
        var_45 = ((/* implicit */unsigned int) 384147589433457707ULL);
    }
    var_46 = var_12;
}
