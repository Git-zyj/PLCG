/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46932
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
    var_12 = ((/* implicit */signed char) var_1);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (signed char)-16);
        var_13 = ((((/* implicit */_Bool) ((var_5) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))) ? (-9003166238660492064LL) : ((+(max((arr_2 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) (((-((((_Bool)1) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) 1275373852)) : (4150962880976096036LL)))))));
                    var_15 = (((-(((var_11) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))))) / (((/* implicit */long long int) (((+(((/* implicit */int) arr_0 [(_Bool)1])))) + (((/* implicit */int) (signed char)(-127 - 1)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = max((((-7080952853283225499LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)14))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [(signed char)10] [i_0]))))));
                                arr_13 [i_0] [i_0] [5] [i_3] [12LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((5405870358539023585LL) & (((/* implicit */long long int) 260096))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_1)))))) == (arr_12 [i_4] [i_3] [i_3 + 1] [i_0] [i_0] [0]))))));
                            }
                        } 
                    } 
                    var_17 = (+(((arr_9 [i_0] [i_1] [i_1] [(_Bool)1] [i_2 - 1]) ? ((+(var_9))) : (23))));
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((arr_14 [i_5]), (var_10)))) | (min((9223372036854775788LL), (((/* implicit */long long int) arr_15 [i_5]))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_5]))))) : (min((min((-4150962880976096024LL), (((/* implicit */long long int) arr_14 [i_5])))), (((/* implicit */long long int) min((arr_15 [i_5]), (var_2))))))));
        arr_16 [i_5] = ((/* implicit */int) (_Bool)1);
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) arr_15 [i_5])) : ((-(var_7))))) >= (((2147483647) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (-1275373824)))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (((!(((((/* implicit */int) arr_15 [i_5])) >= (var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(_Bool)1]))) : (((((/* implicit */long long int) min((((/* implicit */int) arr_15 [i_5])), (2147483647)))) - (max((6176098873235940085LL), (var_11))))))))));
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            /* LoopSeq 4 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_8 = 1; i_8 < 19; i_8 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) min((var_11), (((long long int) arr_18 [i_5]))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_17 [i_7] [i_6] [i_5]))) > (-260097)));
                    var_23 = (((~((+(-4150962880976096002LL))))) - (((/* implicit */long long int) min(((-(-1275373847))), (((/* implicit */int) arr_15 [i_5]))))));
                    var_24 = ((/* implicit */int) min((((((((/* implicit */_Bool) -4150962880976096024LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (4150962880976096023LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_6] [(_Bool)1]))))), (max(((((_Bool)1) ? (1893552650202087618LL) : (1893552650202087619LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -4150962880976096024LL)) ? (arr_22 [i_5] [21] [21]) : (arr_14 [i_7 - 1]))))))));
                    var_25 = arr_21 [i_5] [i_5] [i_5] [(_Bool)1];
                }
                arr_25 [i_7] [i_6] [i_5] = ((/* implicit */int) (+(arr_23 [i_7] [(_Bool)1] [i_5])));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_28 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((signed char) -880137643));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 2; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_26 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_27 [i_5] [i_6] [i_9] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_20 [i_5] [22] [i_5] [16])) : (arr_14 [i_11]))) : (((((/* implicit */int) arr_34 [i_5] [i_5] [i_5])) + (var_10))))), ((~(arr_30 [i_5] [i_9] [i_5] [i_5] [i_5]))));
                            var_27 = ((((/* implicit */_Bool) min((((/* implicit */int) arr_32 [i_6] [i_11] [i_11 + 2] [i_11 + 2] [i_11 - 2] [i_11])), (arr_31 [i_5] [i_6] [i_9] [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [(signed char)22] [(signed char)22] [i_9]))) : (max((((/* implicit */long long int) arr_26 [i_9] [i_6])), (min((((/* implicit */long long int) (_Bool)0)), (7128101455292640588LL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    for (signed char i_13 = 3; i_13 < 21; i_13 += 2) 
                    {
                        {
                            arr_40 [i_9] [i_12] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? ((+(arr_23 [(_Bool)1] [i_6] [i_13 + 2]))) : (((/* implicit */long long int) ((arr_35 [i_5] [i_5]) ? (-1231768846) : (arr_31 [i_5] [i_5] [3] [i_12])))))) / (((((/* implicit */long long int) ((int) arr_20 [i_13] [i_12] [22] [22]))) / (min((((/* implicit */long long int) arr_26 [i_9] [i_9])), (arr_27 [i_5] [i_5] [4] [i_5])))))));
                            var_28 = ((/* implicit */int) (((_Bool)1) ? (((1073741760LL) % (((/* implicit */long long int) ((-260096) / (((/* implicit */int) (signed char)126))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))));
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(var_11))), (((/* implicit */long long int) arr_38 [(_Bool)1]))))) ? (max((((int) -1)), (((/* implicit */int) arr_19 [(_Bool)1] [i_6] [20])))) : (((/* implicit */int) arr_39 [i_9] [i_9]))));
                            var_30 |= (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5))))))));
                            arr_41 [i_9] [i_6] [i_6] = (i_9 % 2 == zero) ? (((/* implicit */long long int) ((((((((/* implicit */_Bool) ((int) var_3))) ? (arr_30 [i_13 - 2] [i_9] [(_Bool)1] [i_13] [i_13 - 1]) : ((+(-1))))) + (2147483647))) >> (((max((((/* implicit */long long int) (-(1765185727)))), (((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_5] [i_6] [i_9] [i_12] [i_12] [i_13] [i_12]))) : (arr_27 [i_5] [i_6] [i_9] [i_12]))))) + (110LL)))))) : (((/* implicit */long long int) ((((((((((/* implicit */_Bool) ((int) var_3))) ? (arr_30 [i_13 - 2] [i_9] [(_Bool)1] [i_13] [i_13 - 1]) : ((+(-1))))) - (2147483647))) + (2147483647))) >> (((max((((/* implicit */long long int) (-(1765185727)))), (((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_5] [i_6] [i_9] [i_12] [i_12] [i_13] [i_12]))) : (arr_27 [i_5] [i_6] [i_9] [i_12]))))) + (110LL))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 20; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_31 |= ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) >> (((arr_30 [(signed char)16] [i_6] [i_6] [i_15 - 1] [i_16]) + (544975692)))))));
                            var_32 = ((((((/* implicit */_Bool) 119405697)) ? (((/* implicit */int) arr_15 [(signed char)21])) : (var_9))) < (arr_18 [i_15]));
                        }
                    } 
                } 
                arr_51 [i_5] [i_5] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_5] [i_6] [i_6] [i_14] [i_5])) ? (((/* implicit */int) arr_26 [i_14] [i_14])) : (var_9)));
            }
            for (long long int i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                arr_56 [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -1338208009)) * (min((arr_54 [i_5] [i_6] [i_6]), (((/* implicit */long long int) arr_53 [i_5] [(signed char)22] [(signed char)22]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)127)), (arr_30 [(_Bool)1] [i_6] [i_6] [i_6] [i_5])))) ? (((((/* implicit */_Bool) var_10)) ? (-1073741760LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -119405697)) ? (arr_22 [i_5] [i_5] [i_17]) : (((/* implicit */int) arr_37 [i_17] [i_17] [i_6] [8] [i_6] [i_5] [i_5]))))))) : (-4419222251301354914LL)));
                var_33 = ((((/* implicit */int) ((max((((/* implicit */long long int) arr_36 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_17])), (var_11))) == (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_5] [i_6] [i_17] [i_5])))))) <= (1073741823));
            }
            var_34 = (-(arr_27 [i_5] [i_5] [i_5] [i_6]));
            var_35 = ((/* implicit */_Bool) min((min((-1073741766LL), (((/* implicit */long long int) arr_43 [i_6] [(signed char)7])))), (min((7191904729866642238LL), (((/* implicit */long long int) min((arr_34 [i_5] [i_6] [13LL]), (((/* implicit */signed char) (_Bool)1)))))))));
        }
        for (int i_18 = 2; i_18 < 21; i_18 += 3) 
        {
            var_36 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 558217936789736584LL)) ? (arr_27 [i_18 - 2] [i_18 + 1] [i_18 + 2] [22]) : (((/* implicit */long long int) arr_57 [i_18 - 1] [i_18 - 1]))))));
            var_37 = ((/* implicit */int) min((4611545280939032576LL), (((/* implicit */long long int) 1473964311))));
        }
        /* vectorizable */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            arr_63 [i_19] [i_19] = ((/* implicit */signed char) ((_Bool) var_11));
            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (((_Bool)1) ? (((int) arr_23 [i_19] [i_5] [i_5])) : (((((/* implicit */_Bool) arr_47 [i_5] [22] [i_19] [i_5] [i_19] [i_19])) ? (((/* implicit */int) arr_39 [(signed char)14] [i_19])) : (arr_30 [i_19] [(signed char)10] [i_5] [i_19] [i_19]))))))));
        }
    }
    for (long long int i_20 = 0; i_20 < 22; i_20 += 1) 
    {
        var_39 = ((((/* implicit */_Bool) ((int) (~(var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_53 [i_20] [i_20] [(signed char)3])) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_59 [(signed char)7])) / (arr_30 [i_20] [i_20] [i_20] [i_20] [i_20])))) : (var_8))) : (((long long int) (+(((/* implicit */int) arr_42 [(signed char)7] [i_20] [(signed char)7] [i_20]))))));
        arr_68 [i_20] = arr_30 [i_20] [i_20] [i_20] [i_20] [i_20];
        var_40 = ((/* implicit */int) ((((/* implicit */long long int) var_0)) ^ (((((/* implicit */long long int) 1020231769)) & (1006931950270360796LL)))));
        var_41 = ((/* implicit */int) max((var_8), (((/* implicit */long long int) max((var_7), (((((/* implicit */_Bool) -1006931950270360796LL)) ? (((/* implicit */int) (signed char)-30)) : (-1338207995))))))));
        var_42 *= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((var_10) * (((/* implicit */int) arr_62 [i_20]))))) ? (arr_54 [(signed char)12] [(signed char)12] [i_20]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (var_0)))))));
    }
    var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -18)) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4)))))));
}
