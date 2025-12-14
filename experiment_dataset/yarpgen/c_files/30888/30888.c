/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((8715668376921663210 ? ((-8715668376921663229 ? 3342677962 : 3718248849324374102)) : ((-409584445 ? -1762150201 : 14728495224385177491))))) ? (((((-8715668376921663229 ? 1 : 1754945828))) ? ((2967921828642286336 ? 3718248849324374106 : -7502702528659725315)) : ((53 ? 2389349901797417934 : 1604483709)))) : var_5));
    var_15 &= var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = ((29584 ? 1 : 3718248849324374104));
        var_17 = ((-1717629291 ? ((14728495224385177491 ? 1943393353 : 30103)) : 1));
        var_18 = ((16170396502797965058 ? 1 : 30359));
    }
    #pragma endscop
}
